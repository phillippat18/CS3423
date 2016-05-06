

/* Define constants */
#define BUFSZ                           1024
#define PCAP_MAGIC                      0xa1b2c3d4
#define PCAP_SWAPPED_MAGIC              0xd4c3b2a1
#define PCAP_MODIFIED_MAGIC             0xa1b2cd34
#define PCAP_SWAPPED_MODIFIED_MAGIC     0x34cdb2a1

/* Function Prototypes */
void fileHeaderIO(int fdin);
void printFileType(u_int32_t magic);

void packetIO(int fdin);
void printPacketHeader(void);
void printTime(void);

int ethHeaderIO(int fdin);
int arpHeaderIO(int fdin);
void printArpOp(uint16_t arpOp);
int ipHeaderIO(int fdin);
void printIpProtocal(uint8_t protocol);

/* System time info for packed*/
struct timev {
    unsigned int tv_sec;
    unsigned int tv_usec;
};

/* data prefixing each packet */
struct my_pkthdr {
    struct timev ts;
    int caplen;
    int len;
} p;


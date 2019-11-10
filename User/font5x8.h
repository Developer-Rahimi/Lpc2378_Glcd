// font.h
//
// Font 5x7 
// 


unsigned char const font8[254][8] = {
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}, //0/ -->
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}, //1/ --> 
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}, //2/ --> 
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}, //3/ --> 
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}, //4/ --> 
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}, //5/ --> 
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}, //6/ --> 
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}, //7/ --> 
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}, //8/ --> 
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}, //9/ -->
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}, //10/ -->
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}, //11/ -->
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}, //12/ -->
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}, //13/ -->  Problem 2
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}, //14/ --> 
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}, //15/ --> 
{0x20,0x20,0x28,0x28,0x68,0xB0,0x60,0x20}, //16/ --> 
{0x20,0x20,0x28,0x2A,0x28,0x30,0x20,0x20}, //17/ --> 
{0x00,0x80,0x80,0x44,0x32,0x24,0x20,0x20}, //18/ --> 
{0x00,0x24,0x24,0x24,0x38,0x20,0x20,0x20}, //19/ --> 
{0x20,0x20,0x20,0x20,0x24,0x2A,0x11,0x00}, //20/ --> 
{0x20,0x20,0x20,0x24,0x2A,0x11,0x20,0x20}, //21/ --> 
{0x30,0x20,0x20,0x20,0x24,0x2A,0x11,0x20}, //22/ --> 
{0x20,0x20,0x30,0x20,0x30,0x28,0x28,0x18}, //23/ --> 
{0x20,0x24,0x22,0x21,0x24,0x2A,0x11,0x00}, //24/ --> 
{0x24,0x22,0x21,0x24,0x2A,0x11,0x20,0x20},//25/ -->
{0x30,0x24,0x22,0x21,0x24,0x2A,0x11,0x20},
{0x00,0x80,0x80,0x40,0x30,0x20,0x20,0x20},
{0x20,0x20,0x20,0x60,0xA0,0x60,0x28,0x30}, //28/ --> 
{0x20,0x20,0x20,0x60,0xB0,0x60,0x20,0x20}, //29/ --> 
{0x00,0x30,0x28,0x60,0xA0,0x60,0x30,0x20}, //30/ --> 
{0x00,0x04,0x06,0x1D,0x25,0x24,0x20,0x20}, //31/ --> 
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}, //32/ -->
{0x00,0x00,0x4F,0x00,0x00,0x00,0x00,0x00}, //33/ --> !
{0x00,0x07,0x00,0x07,0x00,0x00,0x00,0x00}, //34/ --> "
{0x00,0x14,0x7F,0x14,0x7F,0x14,0x00,0x00}, //35/ --> #
{0x00,0x24,0x2A,0x7F,0x2A,0x12,0x00,0x00}, //36/ --> $
{0x00,0x23,0x13,0x08,0x64,0x62,0x00,0x00}, //37/ --> %
{0x00,0x36,0x49,0x55,0x22,0x40,0x00,0x00}, //38/ --> &
{0x00,0x00,0x05,0x03,0x00,0x00,0x00,0x00}, //39/ --> '
{0x00,0x1C,0x22,0x41,0x00,0x00,0x00,0x00}, //40/ --> (
{0x00,0x41,0x22,0x1C,0x00,0x00,0x00,0x00}, //41/ --> )
{0x00,0x14,0x08,0x3E,0x08,0x14,0x00,0x00}, //42/ --> *
{0x00,0x08,0x08,0x3E,0x08,0x08,0x00,0x00}, //43/ --> +
{0x00,0x00,0x28,0x18,0x00,0x00,0x00,0x00}, //44/ --> ,
{0x00,0x08,0x08,0x08,0x08,0x08,0x08,0x00}, //45/ --> -
{0x00,0x30,0x30,0x00,0x00,0x00,0x00,0x00},
{0x00,0x20,0x10,0x08,0x04,0x02,0x00,0x00}, //47/ --> /
{0x00,0x3E,0x51,0x49,0x45,0x3E,0x00,0x00}, //48/ --> 0
{0x00,0x00,0x42,0x7F,0x40,0x00,0x00,0x00}, //49/ --> 1
{0x00,0x42,0x61,0x51,0x49,0x46,0x00,0x00}, //50/ --> 2
{0x00,0x21,0x41,0x45,0x4B,0x31,0x00,0x00}, //51/ --> 3
{0x00,0x18,0x14,0x12,0x7F,0x10,0x00,0x00}, //52/ --> 4
{0x00,0x00,0x27,0x45,0x45,0x45,0x39,0x00}, //53/ --> 5
{0x00,0x3C,0x4A,0x49,0x49,0x30,0x00,0x00}, //54/ --> 6 
{0x00,0x01,0x71,0x09,0x05,0x03,0x00,0x00}, //55/ --> 7
{0x00,0x36,0x49,0x49,0x49,0x36,0x00,0x00}, //56/ --> 8
{0x00,0x06,0x49,0x49,0x29,0x1E,0x00,0x00}, //57/ --> 9
{0x00,0x00,0x36,0x36,0x00,0x00,0x00,0x00}, //58/ --> :
{0x00,0x00,0x56,0x36,0x00,0x00,0x00,0x00}, //59/ --> ;
{0x00,0x08,0x14,0x22,0x41,0x00,0x00,0x00}, //60/ --> <
{0x00,0x24,0x24,0x24,0x24,0x24,0x00,0x00}, //61/ --> =
{0x00,0x00,0x41,0x22,0x14,0x08,0x00,0x00}, //62/ --> >
{0x00,0x02,0x01,0x51,0x09,0x06,0x00,0x00}, //63/ --> ?
{0x00,0x32,0x49,0x79,0x41,0x3E,0x00,0x00}, //64/ --> @
{0x00,0x7E,0x11,0x11,0x11,0x7E,0x00,0x00}, //65/ --> A
{0x00,0x7F,0x49,0x49,0x49,0x36,0x00,0x00}, //66/ --> B
{0x00,0x3E,0x41,0x41,0x41,0x22,0x00,0x00}, //67/ --> C
{0x00,0x7F,0x41,0x41,0x22,0x1C,0x00,0x00}, //68/ --> D
{0x00,0x7F,0x49,0x49,0x49,0x41,0x00,0x00}, //69/ --> E
{0x00,0x7F,0x09,0x09,0x09,0x01,0x00,0x00}, //70/ --> F
{0x00,0x3E,0x41,0x49,0x49,0x3A,0x00,0x00}, //71/ --> G
{0x00,0x7F,0x08,0x08,0x08,0x7F,0x00,0x00}, //72/ --> H
{0x00,0x00,0x41,0x7F,0x41,0x00,0x00,0x00}, //73/ --> I
{0x00,0x20,0x40,0x41,0x3F,0x01,0x00,0x00}, //74/ --> J
{0x00,0x7F,0x08,0x14,0x22,0x41,0x00,0x00}, //75/ --> K
{0x00,0x7F,0x40,0x40,0x40,0x40,0x00,0x00}, //76/ --> L
{0x00,0x7F,0x02,0x0C,0x02,0x7F,0x00,0x00}, //77/ --> M
{0x00,0x7F,0x04,0x08,0x10,0x7F,0x00,0x00}, //78/ --> N
{0x00,0x3E,0x41,0x41,0x41,0x3E,0x00,0x00}, //79/ --> O
{0x00,0x7F,0x09,0x09,0x09,0x06,0x00,0x00}, //80/ --> P
{0x3E,0x41,0x51,0x21,0x5E,0x00,0x00,0x00}, //81/ --> Q
{0x00,0x7F,0x09,0x19,0x29,0x46,0x00,0x00}, //82/ --> R
{0x00,0x46,0x49,0x49,0x49,0x31,0x00,0x00}, //83/ --> S
{0x00,0x01,0x01,0x7F,0x01,0x01,0x00,0x00}, //84/ --> T
{0x00,0x3F,0x40,0x40,0x40,0x3F,0x00,0x00}, //85/ --> U
{0x00,0x1F,0x20,0x40,0x20,0x1F,0x00,0x00}, //86/ --> V
{0x00,0x3F,0x40,0x60,0x40,0x3F,0x00,0x00}, //87/ --> W
{0x00,0x63,0x14,0x08,0x14,0x63,0x00,0x00}, //88/ --> X
{0x00,0x07,0x08,0x70,0x08,0x07,0x00,0x00}, //89/ --> Y
{0x00,0x61,0x51,0x49,0x45,0x43,0x00,0x00}, //90/ --> Z
{0x00,0x7F,0x41,0x41,0x00,0x00,0x00,0x00}, //91/ --> [
{0x00,0x15,0x16,0x7C,0x16,0x15,0x00,0x00}, //92/ --> '\'
{0x00,0x41,0x41,0x7F,0x00,0x00,0x00,0x00}, //93/ --> ]
{0x00,0x04,0x02,0x01,0x02,0x04,0x00,0x00}, //94/ --> ^
{0x00,0x40,0x40,0x40,0x40,0x40,0x00,0x00}, //95/ --> _
{0x00,0x01,0x02,0x04,0x00,0x00,0x00,0x00}, //96/ --> `
{0x00,0x20,0x54,0x54,0x54,0x78,0x00,0x00}, //97/ --> a
{0x00,0x7F,0x44,0x44,0x44,0x38,0x00,0x00}, //98/ --> b
{0x00,0x38,0x44,0x44,0x44,0x00,0x00,0x00}, //99/ --> c
{0x00,0x38,0x44,0x44,0x48,0x7F,0x00,0x00}, //100/ --> d
{0x00,0x38,0x54,0x54,0x54,0x18,0x00,0x00}, //101/ --> e
{0x00,0x10,0x7E,0x11,0x01,0x02,0x00,0x00}, //102/ --> f
{0x00,0x0C,0x52,0x52,0x52,0x3E,0x00,0x00}, //103/ --> g
{0x00,0x7F,0x08,0x04,0x04,0x78,0x00,0x00}, //104/ --> h
{0x00,0x00,0x44,0x7D,0x40,0x00,0x00,0x00}, //105/ --> i
{0x00,0x20,0x40,0x40,0x3D,0x00,0x00,0x00}, //106/ --> j
{0x00,0x7F,0x10,0x28,0x44,0x00,0x00,0x00}, //107/ --> k
{0x00,0x00,0x41,0x7F,0x40,0x00,0x00,0x00}, //108/ --> l
{0x00,0x7C,0x04,0x18,0x04,0x78,0x00,0x00}, //109/ --> m
{0x00,0x7C,0x08,0x04,0x04,0x78,0x00,0x00}, //110/ --> n
{0x00,0x38,0x44,0x44,0x44,0x38,0x00,0x00}, //111/ --> o
{0x00,0x7C,0x14,0x14,0x14,0x08,0x00,0x00}, //112/ --> p
{0x00,0x08,0x14,0x14,0x18,0x7C,0x00,0x00}, //113/ --> q
{0x00,0x7C,0x08,0x04,0x04,0x08,0x00,0x00}, //114/ --> r
{0x00,0x48,0x54,0x54,0x54,0x20,0x00,0x00}, //115/ --> s
{0x00,0x04,0x3F,0x44,0x40,0x20,0x00,0x00}, //116/ --> t
{0x00,0x3C,0x40,0x40,0x20,0x7C,0x00,0x00}, //117/ --> u
{0x00,0x1C,0x20,0x40,0x20,0x1C,0x00,0x00}, //118/ --> v
{0x00,0x1E,0x20,0x10,0x20,0x1E,0x00,0x00}, //119/ --> w
{0x00,0x22,0x14,0x08,0x14,0x22,0x00,0x00}, //120/ --> x
{0x00,0x06,0x48,0x48,0x48,0x3E,0x00,0x00}, //121/ --> y
{0x00,0x44,0x64,0x54,0x4C,0x44,0x00,0x00}, //122/ --> z
{0x00,0x08,0x36,0x41,0x00,0x00,0x00,0x00}, //123/ --> {
{0x00,0x00,0x00,0x7F,0x00,0x00,0x00,0x00}, //124/ --> |
{0x00,0x41,0x36,0x08,0x00,0x00,0x00,0x00}, //125/ --> }
{0x00,0x08,0x08,0x2A,0x1C,0x08,0x00,0x00}, //126/ --> ~
{0x00,0x08,0x1C,0x2A,0x08,0x08,0x00,0x00}, //127/ --> 
{0x00,0x3C,0x42,0x41,0x42,0x3C,0x00,0x00}, //128/ --> �
{0x00,0x30,0x28,0x60,0xA0,0x60,0x28,0x30}, //129/ --> ?
{0x20,0x20,0x20,0x20,0xA0,0x20,0x28,0x30}, //130/ --> �
{0x20,0x20,0x20,0x20,0xB0,0x20,0x20,0x20}, //131/ --> �
{0x00,0x30,0x28,0x20,0xA0,0x20,0x30,0x20}, //132/ --> �
{0x20,0x20,0x20,0x22,0x20,0x22,0x28,0x30}, //133/ --> �
{0x20,0x20,0x20,0x22,0x30,0x22,0x20,0x20}, //134/ --> �
{0x00,0x30,0x28,0x22,0x20,0x22,0x30,0x20}, //135/ --> �
{0x20,0x20,0x20,0x22,0x21,0x22,0x28,0x30}, //136/ --> �
{0x20,0x20,0x20,0x22,0x31,0x22,0x20,0x20}, //137/ --> �
{0x00,0x30,0x28,0x22,0x21,0x22,0x30,0x20}, //138/ --> ?
{0x20,0x20,0x28,0x28,0x28,0xB0,0x20,0x20}, //139/ --> �
{0x20,0x20,0x28,0x28,0x28,0x30,0x20,0x20}, //140/ --> �
{0x00,0xC0,0xA8,0x28,0x68,0xB0,0x60,0x20}, //141/ --> ?
{0x00,0x00,0x80,0x80,0x44,0x32,0x04,0x00}, //142/ --> ?
{0x00,0x24,0x25,0x24,0x38,0x20,0x20,0x20}, //143/ --> ?
{0x30,0x24,0x22,0x21,0x24,0x2A,0x11,0x00}, //144/ --> ?
{0x00,0x80,0x80,0x40,0x34,0x20,0x20,0x20}, //145/ --> '
{0x20,0x20,0x20,0x38,0x20,0x38,0x20,0x18}, //146/ --> '
{0x20,0x20,0x38,0x20,0x38,0x20,0x38,0x20}, //147/ --> "
{0x60,0x80,0x80,0x78,0x20,0x38,0x20,0x18}, //148/ --> "
{0x20,0x20,0x20,0x38,0x22,0x39,0x22,0x18}, //149/ --> �
{0x20,0x20,0x38,0x22,0x39,0x22,0x38,0x20}, //150/ --> �
{0x60,0x80,0x80,0x78,0x22,0x39,0x22,0x18}, //151/ --> �
{0x30,0x20,0x20,0x20,0x24,0x2A,0x11,0x00}, //152/ --> ?
{0x20,0x30,0x20,0x30,0x28,0x28,0x38,0x20}, //153/ --> �
{0x60,0x80,0x80,0x60,0x30,0x28,0x28,0x38}, //154/ --> ?
{0x20,0x20,0x30,0x20,0x30,0x28,0x2A,0x18}, //155/ --> �
{0x20,0x30,0x20,0x30,0x28,0x2A,0x38,0x20}, //156/ --> �
{0x60,0x80,0x80,0x60,0x30,0x28,0x2A,0x38}, //157/ --> ?
{0x20,0x20,0x3E,0x30,0x28,0x28,0x38,0x20}, //158/ --> ?
{0x20,0x20,0x3E,0x30,0x28,0x2A,0x38,0x20}, //159/ --> ?
{0x20,0x20,0x20,0x20,0x30,0x28,0x28,0x00}, //160/ -->
{0x20,0x20,0x20,0x30,0x28,0x28,0x20,0x20}, //161/ --> ?
{0x00,0x40,0xA0,0xB0,0x28,0x28,0x20,0x20}, //162/ --> �
{0x20,0x20,0x20,0x20,0x30,0x28,0x2A,0x00}, //163/ --> �
{0x20,0x20,0x20,0x30,0x28,0x2A,0x20,0x20}, //164/ --> �
{0x00,0x40,0xA0,0xB0,0x28,0x2A,0x20,0x20}, //165/ --> �
{0x20,0x20,0x20,0x20,0x30,0x28,0x2A,0x30}, //166/ --> �
{0x20,0x20,0x30,0x28,0x2A,0x30,0x20,0x20}, //167/ --> �
{0x00,0x18,0x20,0x20,0x30,0x28,0x2A,0x30}, //168/ --> �
{0x20,0x20,0x20,0x20,0x30,0x2A,0x28,0x32}, //169/ --> �
{0x20,0x20,0x30,0x2A,0x28,0x32,0x20,0x20}, //170/ --> ?
{0x60,0x80,0x80,0xB2,0xA8,0x7A,0x20,0x20}, //171/ --> �
{0x22,0x25,0x25,0x25,0x25,0x25,0x25,0x19}, //172/ --> �
{0x20,0x20,0x20,0x1C,0x22,0x21,0x20,0x20}, //173/ --> �
{0x30,0x28,0x2C,0x2A,0x20,0x3F,0x20,0x20}, //174/ --> �
{0x20,0x20,0x20,0x20,0x20,0x20,0x1F,0x00}, //175/ --> �
{0x20,0x20,0x20,0x20,0x1F,0x20,0x20,0x20}, //176/ --> �
{0x00,0x30,0x40,0x40,0x3F,0x20,0x20,0x20}, //177/ --> �
{0x20,0x20,0x20,0x20,0x30,0x48,0x48,0x30}, //178/ --> �
{0x20,0x20,0x30,0x48,0x48,0x30,0x20,0x20}, //179/ --> �
{0x80,0x40,0x30,0x48,0x48,0x30,0x20,0x20}, //180/ --> �
{0x20,0x20,0x20,0x20,0x22,0x20,0x18,0x00}, //181/ --> �
{0x20,0x20,0x20,0x20,0x1A,0x20,0x20,0x20}, //182/ --> �
{0x30,0x40,0x44,0x40,0x30,0x20,0x20,0x20}, //183/ --> �
{0x20,0x20,0x20,0x30,0x28,0x3A,0x2C,0x18}, //184/ --> �
{0x20,0x20,0x30,0x28,0x3A,0x2C,0x38,0x20}, //185/ --> �
{0x00,0x18,0x14,0x14,0x18,0x20,0x20,0x20}, //186/ --> ?
{0x00,0x21,0x22,0x24,0x28,0x10,0x0F,0x00}, //187/ --> �
{0x00,0xB0,0xA8,0x78,0x20,0x20,0x20,0x20}, //188/ --> �
{0x20,0x20,0x20,0xA0,0x20,0xA0,0x28,0x30}, //189/ --> �
{0x20,0x20,0x20,0xA0,0x30,0xA0,0x20,0x20}, //190/ --> �
{0x00,0x60,0x80,0x80,0xA0,0x50,0x10,0x20}, //191/ --> ?
{0x00,0x1E,0x20,0x20,0x20,0x20,0x20,0x20}, //192/ --> ?
{0x00,0x20,0x30,0x28,0x28,0x20,0x00,0x00}, //193/ --> ?
{0x00,0x04,0x02,0x02,0x3A,0x02,0x02,0x01}, //194/ --> ?
{0x00,0x00,0x04,0x06,0x3D,0x05,0x04,0x00}, //195/ --> ?
{0x00,0x00,0x04,0xB6,0xAD,0x7D,0x04,0x00}, //196/ --> ?
{0x00,0x00,0x80,0xC0,0xBF,0xA0,0x80,0x00}, //197/ --> ?
{0x04,0x66,0x85,0x95,0xA8,0xA8,0x48,0x00}, //198/ --> ?
{0x00,0x00,0x00,0x3F,0x00,0x00,0x00,0x00}, //199/ --> ?
{0x00,0x30,0x28,0x20,0xA0,0x20,0x28,0x30}, //200/ --> ?
{0x00,0x00,0x30,0x2A,0x28,0x32,0x00,0x00}, //201/ --> ?
{0x00,0x30,0x28,0x22,0x20,0x22,0x28,0x30}, //202/ --> ?
{0x00,0x30,0x28,0x22,0x21,0x22,0x28,0x30}, //203/ --> ?
{0x00,0xC0,0xA8,0xA8,0x28,0xB0,0x20,0x20}, //204/ --> ?
{0x00,0xC0,0xA8,0xA8,0xA8,0x30,0x20,0x20}, //205/ --> ?
{0x00,0xC0,0xA8,0xAA,0x28,0x30,0x20,0x20}, //206/ --> ?
{0x00,0x00,0x24,0x24,0x24,0x38,0x00,0x00}, //207/ --> ?
{0x00,0x00,0x24,0x25,0x24,0x38,0x00,0x00}, //208/ --> ?
{0x00,0x80,0x80,0x40,0x30,0x00,0x00,0x00}, //209/ --> ?
{0x00,0x00,0x80,0x80,0x40,0x34,0x00,0x00}, //210/ --> ?
{0x60,0x80,0x80,0x78,0x20,0x38,0x20,0x18}, //211/ --> ?
{0x60,0x80,0x80,0x78,0x22,0x39,0x22,0x18}, //212/ --> ?
{0x60,0x80,0x80,0x60,0x30,0x28,0x28,0x18}, //213/ --> ?
{0x60,0x80,0x80,0x60,0x30,0x28,0x2A,0x18}, //214/ --> ?
{0x00,0x22,0x14,0x08,0x14,0x22,0x00,0x00}, //215/ --> �
{0x20,0x20,0x3E,0x30,0x28,0x28,0x18,0x00}, //216/ --> ?
{0x20,0x20,0x3E,0x30,0x28,0x2A,0x18,0x00}, //217/ --> ?
{0x00,0x00,0x40,0xA0,0xB0,0x28,0x28,0x00}, //218/ --> ?
{0x00,0x00,0x40,0xA0,0xB0,0x2A,0x28,0x00}, //219/ --> ?
{0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20}, //220/ --> ?
{0x00,0x18,0x20,0x20,0x30,0x28,0x2A,0x30}, //221/ --> ?
{0x00,0x60,0x80,0x80,0xB2,0xA8,0x7A,0x00}, //222/ --> ?
{0x00,0x30,0x28,0x2C,0x2A,0x20,0x3F,0x00}, //223/ --> ?
{0x00,0x40,0xA9,0xAA,0xA8,0xF0,0x00,0x00}, //224/ --> �
{0x00,0x00,0x60,0x80,0x80,0x7E,0x00,0x00}, //225/ --> ?
{0x00,0x40,0xAA,0xA9,0xAA,0xF0,0x00,0x00}, //226/ --> �
{0x00,0x00,0xC0,0x20,0x30,0x28,0x28,0x30}, //227/ --> ?
{0x00,0x00,0x60,0x80,0x88,0x80,0x60,0x00}, //228/ --> ?
{0x00,0x00,0x30,0x28,0x28,0x30,0x00,0x00}, //229/ --> ?
{0x00,0x00,0x00,0xB0,0xA8,0x78,0x00,0x00}, //230/ --> ?
{0x04,0x26,0x25,0x25,0x28,0x10,0x0F,0x00}, //231/ --> �
{0x04,0x22,0x22,0x26,0x29,0x10,0x0F,0x00}, //232/ --> �
{0x00,0x21,0x22,0x24,0xA8,0xD0,0xAF,0xA0}, //233/ --> �
{0x00,0x70,0xAA,0xA9,0xAA,0x30,0x00,0x00}, //234/ --> �
{0x00,0x70,0xAA,0xA8,0xAA,0x30,0x00,0x00}, //235/ --> �
{0x00,0x30,0x40,0x40,0x50,0x28,0x08,0x00}, //236/ --> ?
{0x00,0x30,0xC0,0x40,0xD0,0x28,0x08,0x00}, //237/ --> ?
{0x00,0x00,0x02,0x79,0x02,0x00,0x00,0x00}, //238/ --> �
{0x00,0x00,0x02,0x78,0x02,0x00,0x00,0x00}, //239/ --> �
{0x00,0x00,0x00,0x00,0x00,0x05,0x05,0x05}, //240/ --> ?
{0x00,0x00,0x00,0x04,0x03,0x0B,0x06,0x06}, //241/ --> ?
{0xA0,0xA0,0xA0,0x00,0x00,0x00,0x00,0x00}, //242/ --> ?
{0x00,0x00,0x01,0x01,0x01,0x01,0x00,0x00}, //243/ --> ?
{0x00,0x21,0x22,0x24,0x28,0x10,0x2F,0x20}, //244/ --> �
{0x00,0x00,0x00,0x00,0x00,0x04,0x03,0x03}, //245/ --> ?
{0x00,0x00,0x80,0x80,0x80,0x80,0x00,0x00}, //246/ --> ?
{0x00,0x00,0x10,0x10,0x54,0x10,0x10,0x00}, //247/ --> �
{0x00,0x00,0x02,0x04,0x02,0x04,0x02,0x00}, //248/ --> ?
{0x20,0x24,0x26,0x25,0x25,0x20,0x28,0x30}, //249/ --> �
{0x20,0x24,0x26,0x25,0x35,0x20,0x20,0x20}, //250/ --> ?
{0x08,0x6C,0x8A,0x8A,0xA0,0x50,0x10,0x20}, //251/ --> �
{0x04,0xB6,0xAD,0x7D,0x24,0x20,0x20,0x20}, //252/ --> �
{0x00,0x19,0x14,0x15,0x18,0x20,0x20,0x20} //253/ --> ?


};
//

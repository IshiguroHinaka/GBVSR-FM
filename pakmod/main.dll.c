typedef unsigned char   undefined;

typedef unsigned char    bool;
typedef unsigned char    byte;
typedef unsigned int    dword;
typedef unsigned long long    GUID;
typedef pointer32 ImageBaseOffset32;

typedef long long    longlong;
typedef unsigned long long    qword;
typedef unsigned char    uchar;
typedef unsigned int    uint;
typedef unsigned long    ulong;
typedef unsigned long long    ulonglong;
typedef unsigned char    undefined1;
typedef unsigned short    undefined2;
typedef unsigned int    undefined4;
typedef unsigned long long    undefined8;
typedef unsigned short    ushort;
typedef unsigned short    wchar16;
typedef short    wchar_t;
typedef unsigned short    word;
typedef struct _s__RTTIBaseClassDescriptor _s__RTTIBaseClassDescriptor, *P_s__RTTIBaseClassDescriptor;

typedef struct _s__RTTIBaseClassDescriptor RTTIBaseClassDescriptor;

typedef RTTIBaseClassDescriptor *RTTIBaseClassDescriptor *32 __((image-base-relative));

typedef RTTIBaseClassDescriptor *32 __((image-base-relative)) *RTTIBaseClassDescriptor *32 __((image-base-relative)) *32 __((image-base-relative));

typedef struct PMD PMD, *PPMD;

struct PMD {
    int mdisp;
    int pdisp;
    int vdisp;
};

struct _s__RTTIBaseClassDescriptor {
    ImageBaseOffset32 pTypeDescriptor; // ref to TypeDescriptor (RTTI 0) for class
    dword numContainedBases; // count of extended classes in BaseClassArray (RTTI 2)
    struct PMD where; // member displacement structure
    dword attributes; // bit flags
    ImageBaseOffset32 pClassHierarchyDescriptor; // ref to ClassHierarchyDescriptor (RTTI 3) for class
};

typedef struct _s__RTTIClassHierarchyDescriptor _s__RTTIClassHierarchyDescriptor, *P_s__RTTIClassHierarchyDescriptor;

struct _s__RTTIClassHierarchyDescriptor {
    dword signature;
    dword attributes; // bit flags
    dword numBaseClasses; // number of base classes (i.e. rtti1Count)
    RTTIBaseClassDescriptor *32 __((image-base-relative)) *32 __((image-base-relative)) pBaseClassArray; // ref to BaseClassArray (RTTI 2)
};

typedef struct _s__RTTICompleteObjectLocator _s__RTTICompleteObjectLocator, *P_s__RTTICompleteObjectLocator;

struct _s__RTTICompleteObjectLocator {
    dword signature;
    dword offset; // offset of vbtable within class
    dword cdOffset; // constructor displacement offset
    ImageBaseOffset32 pTypeDescriptor; // ref to TypeDescriptor (RTTI 0) for class
    ImageBaseOffset32 pClassDescriptor; // ref to ClassHierarchyDescriptor (RTTI 3)
};

typedef struct _IMAGE_RUNTIME_FUNCTION_ENTRY _IMAGE_RUNTIME_FUNCTION_ENTRY, *P_IMAGE_RUNTIME_FUNCTION_ENTRY;

struct _IMAGE_RUNTIME_FUNCTION_ENTRY {
    ImageBaseOffset32 BeginAddress;
    dword EndAddress; // Apply ImageBaseOffset32 to see reference
    ImageBaseOffset32 UnwindInfoAddressOrData;
};

typedef struct CLIENT_ID CLIENT_ID, *PCLIENT_ID;

struct CLIENT_ID {
    void *UniqueProcess;
    void *UniqueThread;
};

typedef struct _s__RTTIClassHierarchyDescriptor RTTIClassHierarchyDescriptor;

typedef struct _s__RTTICompleteObjectLocator RTTICompleteObjectLocator;

typedef ulonglong __uint64;

typedef struct exception exception, *Pexception;

struct exception { // PlaceHolder Class Structure
};

typedef struct _STARTUPINFOW _STARTUPINFOW, *P_STARTUPINFOW;

typedef ulong DWORD;

typedef wchar_t WCHAR;

typedef WCHAR *LPWSTR;

typedef ushort WORD;

typedef uchar BYTE;

typedef BYTE *LPBYTE;

typedef void *HANDLE;

struct _STARTUPINFOW {
    DWORD cb;
    LPWSTR lpReserved;
    LPWSTR lpDesktop;
    LPWSTR lpTitle;
    DWORD dwX;
    DWORD dwY;
    DWORD dwXSize;
    DWORD dwYSize;
    DWORD dwXCountChars;
    DWORD dwYCountChars;
    DWORD dwFillAttribute;
    DWORD dwFlags;
    WORD wShowWindow;
    WORD cbReserved2;
    LPBYTE lpReserved2;
    HANDLE hStdInput;
    HANDLE hStdOutput;
    HANDLE hStdError;
};

typedef long LONG;

typedef struct _EXCEPTION_POINTERS _EXCEPTION_POINTERS, *P_EXCEPTION_POINTERS;

typedef LONG (*PTOP_LEVEL_EXCEPTION_FILTER)(struct _EXCEPTION_POINTERS *);

typedef struct _EXCEPTION_RECORD _EXCEPTION_RECORD, *P_EXCEPTION_RECORD;

typedef struct _EXCEPTION_RECORD EXCEPTION_RECORD;

typedef EXCEPTION_RECORD *PEXCEPTION_RECORD;

typedef struct _CONTEXT _CONTEXT, *P_CONTEXT;

typedef struct _CONTEXT *PCONTEXT;

typedef void *PVOID;

typedef ulonglong ULONG_PTR;

typedef ulonglong DWORD64;

typedef union _union_54 _union_54, *P_union_54;

typedef struct _M128A _M128A, *P_M128A;

typedef struct _M128A M128A;

typedef struct _XSAVE_FORMAT _XSAVE_FORMAT, *P_XSAVE_FORMAT;

typedef struct _XSAVE_FORMAT XSAVE_FORMAT;

typedef XSAVE_FORMAT XMM_SAVE_AREA32;

typedef struct _struct_55 _struct_55, *P_struct_55;

typedef ulonglong ULONGLONG;

typedef longlong LONGLONG;

struct _M128A {
    ULONGLONG Low;
    LONGLONG High;
};

struct _XSAVE_FORMAT {
    WORD ControlWord;
    WORD StatusWord;
    BYTE TagWord;
    BYTE Reserved1;
    WORD ErrorOpcode;
    DWORD ErrorOffset;
    WORD ErrorSelector;
    WORD Reserved2;
    DWORD DataOffset;
    WORD DataSelector;
    WORD Reserved3;
    DWORD MxCsr;
    DWORD MxCsr_Mask;
    M128A FloatRegisters[8];
    M128A XmmRegisters[16];
    BYTE Reserved4[96];
};

struct _struct_55 {
    M128A Header[2];
    M128A Legacy[8];
    M128A Xmm0;
    M128A Xmm1;
    M128A Xmm2;
    M128A Xmm3;
    M128A Xmm4;
    M128A Xmm5;
    M128A Xmm6;
    M128A Xmm7;
    M128A Xmm8;
    M128A Xmm9;
    M128A Xmm10;
    M128A Xmm11;
    M128A Xmm12;
    M128A Xmm13;
    M128A Xmm14;
    M128A Xmm15;
};

union _union_54 {
    XMM_SAVE_AREA32 FltSave;
    struct _struct_55 s;
};

struct _CONTEXT {
    DWORD64 P1Home;
    DWORD64 P2Home;
    DWORD64 P3Home;
    DWORD64 P4Home;
    DWORD64 P5Home;
    DWORD64 P6Home;
    DWORD ContextFlags;
    DWORD MxCsr;
    WORD SegCs;
    WORD SegDs;
    WORD SegEs;
    WORD SegFs;
    WORD SegGs;
    WORD SegSs;
    DWORD EFlags;
    DWORD64 Dr0;
    DWORD64 Dr1;
    DWORD64 Dr2;
    DWORD64 Dr3;
    DWORD64 Dr6;
    DWORD64 Dr7;
    DWORD64 Rax;
    DWORD64 Rcx;
    DWORD64 Rdx;
    DWORD64 Rbx;
    DWORD64 Rsp;
    DWORD64 Rbp;
    DWORD64 Rsi;
    DWORD64 Rdi;
    DWORD64 R8;
    DWORD64 R9;
    DWORD64 R10;
    DWORD64 R11;
    DWORD64 R12;
    DWORD64 R13;
    DWORD64 R14;
    DWORD64 R15;
    DWORD64 Rip;
    union _union_54 u;
    M128A VectorRegister[26];
    DWORD64 VectorControl;
    DWORD64 DebugControl;
    DWORD64 LastBranchToRip;
    DWORD64 LastBranchFromRip;
    DWORD64 LastExceptionToRip;
    DWORD64 LastExceptionFromRip;
};

struct _EXCEPTION_RECORD {
    DWORD ExceptionCode;
    DWORD ExceptionFlags;
    struct _EXCEPTION_RECORD *ExceptionRecord;
    PVOID ExceptionAddress;
    DWORD NumberParameters;
    ULONG_PTR ExceptionInformation[15];
};

struct _EXCEPTION_POINTERS {
    PEXCEPTION_RECORD ExceptionRecord;
    PCONTEXT ContextRecord;
};

typedef PTOP_LEVEL_EXCEPTION_FILTER LPTOP_LEVEL_EXCEPTION_FILTER;

typedef struct _STARTUPINFOW *LPSTARTUPINFOW;

typedef union _LARGE_INTEGER _LARGE_INTEGER, *P_LARGE_INTEGER;

typedef struct _struct_19 _struct_19, *P_struct_19;

typedef struct _struct_20 _struct_20, *P_struct_20;

struct _struct_20 {
    DWORD LowPart;
    LONG HighPart;
};

struct _struct_19 {
    DWORD LowPart;
    LONG HighPart;
};

union _LARGE_INTEGER {
    struct _struct_19 s;
    struct _struct_20 u;
    LONGLONG QuadPart;
};

typedef union _LARGE_INTEGER LARGE_INTEGER;

typedef struct _RUNTIME_FUNCTION _RUNTIME_FUNCTION, *P_RUNTIME_FUNCTION;

struct _RUNTIME_FUNCTION {
    DWORD BeginAddress;
    DWORD EndAddress;
    DWORD UnwindData;
};

typedef struct _RUNTIME_FUNCTION *PRUNTIME_FUNCTION;

typedef enum _EXCEPTION_DISPOSITION {
    ExceptionContinueExecution=0,
    ExceptionContinueSearch=1,
    ExceptionNestedException=2,
    ExceptionCollidedUnwind=3
} _EXCEPTION_DISPOSITION;

typedef enum _EXCEPTION_DISPOSITION EXCEPTION_DISPOSITION;

typedef EXCEPTION_DISPOSITION (EXCEPTION_ROUTINE)(struct _EXCEPTION_RECORD *, PVOID, struct _CONTEXT *, PVOID);

typedef WCHAR *LPCWSTR;

typedef struct _M128A *PM128A;

typedef struct _UNWIND_HISTORY_TABLE_ENTRY _UNWIND_HISTORY_TABLE_ENTRY, *P_UNWIND_HISTORY_TABLE_ENTRY;

typedef struct _UNWIND_HISTORY_TABLE_ENTRY UNWIND_HISTORY_TABLE_ENTRY;

struct _UNWIND_HISTORY_TABLE_ENTRY {
    DWORD64 ImageBase;
    PRUNTIME_FUNCTION FunctionEntry;
};

typedef union _union_61 _union_61, *P_union_61;

typedef struct _struct_62 _struct_62, *P_struct_62;

struct _struct_62 {
    PM128A Xmm0;
    PM128A Xmm1;
    PM128A Xmm2;
    PM128A Xmm3;
    PM128A Xmm4;
    PM128A Xmm5;
    PM128A Xmm6;
    PM128A Xmm7;
    PM128A Xmm8;
    PM128A Xmm9;
    PM128A Xmm10;
    PM128A Xmm11;
    PM128A Xmm12;
    PM128A Xmm13;
    PM128A Xmm14;
    PM128A Xmm15;
};

union _union_61 {
    PM128A FloatingContext[16];
    struct _struct_62 s;
};

typedef union _union_63 _union_63, *P_union_63;

typedef ulonglong *PDWORD64;

typedef struct _struct_64 _struct_64, *P_struct_64;

struct _struct_64 {
    PDWORD64 Rax;
    PDWORD64 Rcx;
    PDWORD64 Rdx;
    PDWORD64 Rbx;
    PDWORD64 Rsp;
    PDWORD64 Rbp;
    PDWORD64 Rsi;
    PDWORD64 Rdi;
    PDWORD64 R8;
    PDWORD64 R9;
    PDWORD64 R10;
    PDWORD64 R11;
    PDWORD64 R12;
    PDWORD64 R13;
    PDWORD64 R14;
    PDWORD64 R15;
};

union _union_63 {
    PDWORD64 IntegerContext[16];
    struct _struct_64 s;
};

typedef struct _UNWIND_HISTORY_TABLE _UNWIND_HISTORY_TABLE, *P_UNWIND_HISTORY_TABLE;

typedef struct _UNWIND_HISTORY_TABLE *PUNWIND_HISTORY_TABLE;

struct _UNWIND_HISTORY_TABLE {
    DWORD Count;
    BYTE LocalHint;
    BYTE GlobalHint;
    BYTE Search;
    BYTE Once;
    DWORD64 LowAddress;
    DWORD64 HighAddress;
    UNWIND_HISTORY_TABLE_ENTRY Entry[12];
};

typedef struct _KNONVOLATILE_CONTEXT_POINTERS _KNONVOLATILE_CONTEXT_POINTERS, *P_KNONVOLATILE_CONTEXT_POINTERS;

typedef struct _KNONVOLATILE_CONTEXT_POINTERS *PKNONVOLATILE_CONTEXT_POINTERS;

struct _KNONVOLATILE_CONTEXT_POINTERS {
    union _union_61 u;
    union _union_63 u2;
};

typedef EXCEPTION_ROUTINE *PEXCEPTION_ROUTINE;

typedef struct IMAGE_DOS_HEADER IMAGE_DOS_HEADER, *PIMAGE_DOS_HEADER;

struct IMAGE_DOS_HEADER {
    char e_magic[2]; // Magic number
    word e_cblp; // Bytes of last page
    word e_cp; // Pages in file
    word e_crlc; // Relocations
    word e_cparhdr; // Size of header in paragraphs
    word e_minalloc; // Minimum extra paragraphs needed
    word e_maxalloc; // Maximum extra paragraphs needed
    word e_ss; // Initial (relative) SS value
    word e_sp; // Initial SP value
    word e_csum; // Checksum
    word e_ip; // Initial IP value
    word e_cs; // Initial (relative) CS value
    word e_lfarlc; // File address of relocation table
    word e_ovno; // Overlay number
    word e_res[4][4]; // Reserved words
    word e_oemid; // OEM identifier (for e_oeminfo)
    word e_oeminfo; // OEM information; e_oemid specific
    word e_res2[10][10]; // Reserved words
    dword e_lfanew; // File address of new exe header
    byte e_program[64]; // Actual DOS program
};

typedef ULONG_PTR SIZE_T;

typedef struct DotNetPdbInfo DotNetPdbInfo, *PDotNetPdbInfo;

struct DotNetPdbInfo {
    char signature[4];
    GUID guid;
    dword age;
    char pdbpath[101];
};

typedef struct _Cvtvec _Cvtvec, *P_Cvtvec;

struct _Cvtvec {
    uint _Page;
    uint _Mbcurmax;
    int _Isclocale;
    uchar _Isleadbyte[32];
};

typedef struct _FILETIME _FILETIME, *P_FILETIME;

typedef struct _FILETIME *LPFILETIME;

struct _FILETIME {
    DWORD dwLowDateTime;
    DWORD dwHighDateTime;
};

typedef struct HINSTANCE__ HINSTANCE__, *PHINSTANCE__;

typedef struct HINSTANCE__ *HINSTANCE;

struct HINSTANCE__ {
    int unused;
};

typedef void *LPVOID;

typedef HINSTANCE HMODULE;

typedef DWORD *PDWORD;

typedef int BOOL;

typedef struct IMAGE_LOAD_CONFIG_CODE_INTEGRITY IMAGE_LOAD_CONFIG_CODE_INTEGRITY, *PIMAGE_LOAD_CONFIG_CODE_INTEGRITY;

struct IMAGE_LOAD_CONFIG_CODE_INTEGRITY {
    word Flags;
    word Catalog;
    dword CatalogOffset;
    dword Reserved;
};

typedef struct IMAGE_DEBUG_DIRECTORY IMAGE_DEBUG_DIRECTORY, *PIMAGE_DEBUG_DIRECTORY;

struct IMAGE_DEBUG_DIRECTORY {
    dword Characteristics;
    dword TimeDateStamp;
    word MajorVersion;
    word MinorVersion;
    dword Type;
    dword SizeOfData;
    dword AddressOfRawData;
    dword PointerToRawData;
};

typedef struct IMAGE_FILE_HEADER IMAGE_FILE_HEADER, *PIMAGE_FILE_HEADER;

struct IMAGE_FILE_HEADER {
    word Machine; // 34404
    word NumberOfSections;
    dword TimeDateStamp;
    dword PointerToSymbolTable;
    dword NumberOfSymbols;
    word SizeOfOptionalHeader;
    word Characteristics;
};

typedef struct IMAGE_LOAD_CONFIG_DIRECTORY64 IMAGE_LOAD_CONFIG_DIRECTORY64, *PIMAGE_LOAD_CONFIG_DIRECTORY64;

typedef enum IMAGE_GUARD_FLAGS {
    IMAGE_GUARD_CF_INSTRUMENTED=256,
    IMAGE_GUARD_CFW_INSTRUMENTED=512,
    IMAGE_GUARD_CF_FUNCTION_TABLE_PRESENT=1024,
    IMAGE_GUARD_SECURITY_COOKIE_UNUSED=2048,
    IMAGE_GUARD_PROTECT_DELAYLOAD_IAT=4096,
    IMAGE_GUARD_DELAYLOAD_IAT_IN_ITS_OWN_SECTION=8192,
    IMAGE_GUARD_CF_EXPORT_SUPPRESSION_INFO_PRESENT=16384,
    IMAGE_GUARD_CF_ENABLE_EXPORT_SUPPRESSION=32768,
    IMAGE_GUARD_CF_LONGJUMP_TABLE_PRESENT=65536,
    IMAGE_GUARD_RF_INSTRUMENTED=131072,
    IMAGE_GUARD_RF_ENABLE=262144,
    IMAGE_GUARD_RF_STRICT=524288,
    IMAGE_GUARD_CF_FUNCTION_TABLE_SIZE_MASK_1=268435456,
    IMAGE_GUARD_CF_FUNCTION_TABLE_SIZE_MASK_2=536870912,
    IMAGE_GUARD_CF_FUNCTION_TABLE_SIZE_MASK_4=1073741824,
    IMAGE_GUARD_CF_FUNCTION_TABLE_SIZE_MASK_8=2147483648
} IMAGE_GUARD_FLAGS;

struct IMAGE_LOAD_CONFIG_DIRECTORY64 {
    dword Size;
    dword TimeDateStamp;
    word MajorVersion;
    word MinorVersion;
    dword GlobalFlagsClear;
    dword GlobalFlagsSet;
    dword CriticalSectionDefaultTimeout;
    qword DeCommitFreeBlockThreshold;
    qword DeCommitTotalFreeThreshold;
    pointer64 LockPrefixTable;
    qword MaximumAllocationSize;
    qword VirtualMemoryThreshold;
    qword ProcessAffinityMask;
    dword ProcessHeapFlags;
    word CsdVersion;
    word DependentLoadFlags;
    pointer64 EditList;
    pointer64 SecurityCookie;
    pointer64 SEHandlerTable;
    qword SEHandlerCount;
    pointer64 GuardCFCCheckFunctionPointer;
    pointer64 GuardCFDispatchFunctionPointer;
    pointer64 GuardCFFunctionTable;
    qword GuardCFFunctionCount;
    enum IMAGE_GUARD_FLAGS GuardFlags;
    struct IMAGE_LOAD_CONFIG_CODE_INTEGRITY CodeIntegrity;
    pointer64 GuardAddressTakenIatEntryTable;
    qword GuardAddressTakenIatEntryCount;
    pointer64 GuardLongJumpTargetTable;
    qword GuardLongJumpTargetCount;
    pointer64 DynamicValueRelocTable;
    pointer64 CHPEMetadataPointer;
    pointer64 GuardRFFailureRoutine;
    pointer64 GuardRFFailureRoutineFunctionPointer;
    dword DynamicValueRelocTableOffset;
    word DynamicValueRelocTableSection;
    word Reserved1;
    pointer64 GuardRFVerifyStackPointerFunctionPointer;
    dword HotPatchTableOffset;
    dword Reserved2;
    qword Reserved3;
};

typedef struct IMAGE_OPTIONAL_HEADER64 IMAGE_OPTIONAL_HEADER64, *PIMAGE_OPTIONAL_HEADER64;

typedef struct IMAGE_DATA_DIRECTORY IMAGE_DATA_DIRECTORY, *PIMAGE_DATA_DIRECTORY;

struct IMAGE_DATA_DIRECTORY {
    ImageBaseOffset32 VirtualAddress;
    dword Size;
};

struct IMAGE_OPTIONAL_HEADER64 {
    word Magic;
    byte MajorLinkerVersion;
    byte MinorLinkerVersion;
    dword SizeOfCode;
    dword SizeOfInitializedData;
    dword SizeOfUninitializedData;
    ImageBaseOffset32 AddressOfEntryPoint;
    ImageBaseOffset32 BaseOfCode;
    pointer64 ImageBase;
    dword SectionAlignment;
    dword FileAlignment;
    word MajorOperatingSystemVersion;
    word MinorOperatingSystemVersion;
    word MajorImageVersion;
    word MinorImageVersion;
    word MajorSubsystemVersion;
    word MinorSubsystemVersion;
    dword Win32VersionValue;
    dword SizeOfImage;
    dword SizeOfHeaders;
    dword CheckSum;
    word Subsystem;
    word DllCharacteristics;
    qword SizeOfStackReserve;
    qword SizeOfStackCommit;
    qword SizeOfHeapReserve;
    qword SizeOfHeapCommit;
    dword LoaderFlags;
    dword NumberOfRvaAndSizes;
    struct IMAGE_DATA_DIRECTORY DataDirectory[16];
};

typedef struct IMAGE_SECTION_HEADER IMAGE_SECTION_HEADER, *PIMAGE_SECTION_HEADER;

typedef union Misc Misc, *PMisc;

typedef enum SectionFlags {
    IMAGE_SCN_TYPE_NO_PAD=8,
    IMAGE_SCN_RESERVED_0001=16,
    IMAGE_SCN_CNT_CODE=32,
    IMAGE_SCN_CNT_INITIALIZED_DATA=64,
    IMAGE_SCN_CNT_UNINITIALIZED_DATA=128,
    IMAGE_SCN_LNK_OTHER=256,
    IMAGE_SCN_LNK_INFO=512,
    IMAGE_SCN_RESERVED_0040=1024,
    IMAGE_SCN_LNK_REMOVE=2048,
    IMAGE_SCN_LNK_COMDAT=4096,
    IMAGE_SCN_GPREL=32768,
    IMAGE_SCN_MEM_16BIT=131072,
    IMAGE_SCN_MEM_PURGEABLE=131072,
    IMAGE_SCN_MEM_LOCKED=262144,
    IMAGE_SCN_MEM_PRELOAD=524288,
    IMAGE_SCN_ALIGN_1BYTES=1048576,
    IMAGE_SCN_ALIGN_2BYTES=2097152,
    IMAGE_SCN_ALIGN_4BYTES=3145728,
    IMAGE_SCN_ALIGN_8BYTES=4194304,
    IMAGE_SCN_ALIGN_16BYTES=5242880,
    IMAGE_SCN_ALIGN_32BYTES=6291456,
    IMAGE_SCN_ALIGN_64BYTES=7340032,
    IMAGE_SCN_ALIGN_128BYTES=8388608,
    IMAGE_SCN_ALIGN_256BYTES=9437184,
    IMAGE_SCN_ALIGN_512BYTES=10485760,
    IMAGE_SCN_ALIGN_1024BYTES=11534336,
    IMAGE_SCN_ALIGN_2048BYTES=12582912,
    IMAGE_SCN_ALIGN_4096BYTES=13631488,
    IMAGE_SCN_ALIGN_8192BYTES=14680064,
    IMAGE_SCN_LNK_NRELOC_OVFL=16777216,
    IMAGE_SCN_MEM_DISCARDABLE=33554432,
    IMAGE_SCN_MEM_NOT_CACHED=67108864,
    IMAGE_SCN_MEM_NOT_PAGED=134217728,
    IMAGE_SCN_MEM_SHARED=268435456,
    IMAGE_SCN_MEM_EXECUTE=536870912,
    IMAGE_SCN_MEM_READ=1073741824,
    IMAGE_SCN_MEM_WRITE=2147483648
} SectionFlags;

union Misc {
    dword PhysicalAddress;
    dword VirtualSize;
};

struct IMAGE_SECTION_HEADER {
    char Name[8];
    union Misc Misc;
    ImageBaseOffset32 VirtualAddress;
    dword SizeOfRawData;
    dword PointerToRawData;
    dword PointerToRelocations;
    dword PointerToLinenumbers;
    word NumberOfRelocations;
    word NumberOfLinenumbers;
    enum SectionFlags Characteristics;
};

typedef struct IMAGE_NT_HEADERS64 IMAGE_NT_HEADERS64, *PIMAGE_NT_HEADERS64;

struct IMAGE_NT_HEADERS64 {
    char Signature[4];
    struct IMAGE_FILE_HEADER FileHeader;
    struct IMAGE_OPTIONAL_HEADER64 OptionalHeader;
};

typedef struct IMAGE_DIRECTORY_ENTRY_EXPORT IMAGE_DIRECTORY_ENTRY_EXPORT, *PIMAGE_DIRECTORY_ENTRY_EXPORT;

struct IMAGE_DIRECTORY_ENTRY_EXPORT {
    dword Characteristics;
    dword TimeDateStamp;
    word MajorVersion;
    word MinorVersion;
    ImageBaseOffset32 Name;
    dword Base;
    dword NumberOfFunctions;
    dword NumberOfNames;
    ImageBaseOffset32 AddressOfFunctions;
    ImageBaseOffset32 AddressOfNames;
    ImageBaseOffset32 AddressOfNameOrdinals;
};

typedef int PMFN;

typedef struct _s_ThrowInfo _s_ThrowInfo, *P_s_ThrowInfo;

struct _s_ThrowInfo {
    uint attributes;
    PMFN pmfnUnwind;
    int pForwardCompat;
    int pCatchableTypeArray;
};

typedef struct TypeDescriptor TypeDescriptor, *PTypeDescriptor;

struct TypeDescriptor {
    void *pVFTable;
    void *spare;
    char name[0];
};

typedef struct _s_ThrowInfo ThrowInfo;

typedef int mbstate_t;

typedef struct SignatureData SignatureData, *PSignatureData;

struct SignatureData { // PlaceHolder Structure
};

typedef struct CppUserModBase CppUserModBase, *PCppUserModBase;

struct CppUserModBase { // PlaceHolder Structure
};

typedef struct Lua Lua, *PLua;

struct Lua { // PlaceHolder Structure
};

typedef struct unordered_map<enum_RC::ScanTarget,class_std::vector<class_RC::SignatureContainer,class_std::allocator<class_RC::SignatureContainer>_>,struct_std::hash<enum_RC::ScanTarget>,struct_std::equal_to<enum_RC::ScanTarget>,class_std::allocator<struct_std::pair<enum_RC::ScanTarget_const_,class_std::vector<class_RC::SignatureContainer,class_std::allocator<class_RC::SignatureContainer>_>_>_>_> unordered_map<enum_RC::ScanTarget,class_std::vector<class_RC::SignatureContainer,class_std::allocator<class_RC::SignatureContainer>_>,struct_std::hash<enum_RC::ScanTarget>,struct_std::equal_to<enum_RC::ScanTarget>,class_std::allocator<struct_std::pair<enum_RC::ScanTarget_const_,class_std::vector<class_RC::SignatureContainer,class_std::allocator<class_RC::SignatureContainer>_>_>_>_>, *Punordered_map<enum_RC::ScanTarget,class_std::vector<class_RC::SignatureContainer,class_std::allocator<class_RC::SignatureContainer>_>,struct_std::hash<enum_RC::ScanTarget>,struct_std::equal_to<enum_RC::ScanTarget>,class_std::allocator<struct_std::pair<enum_RC::ScanTarget_const_,class_std::vector<class_RC::SignatureContainer,class_std::allocator<class_RC::SignatureContainer>_>_>_>_>;

struct unordered_map<enum_RC::ScanTarget,class_std::vector<class_RC::SignatureContainer,class_std::allocator<class_RC::SignatureContainer>_>,struct_std::hash<enum_RC::ScanTarget>,struct_std::equal_to<enum_RC::ScanTarget>,class_std::allocator<struct_std::pair<enum_RC::ScanTarget_const_,class_std::vector<class_RC::SignatureContainer,class_std::allocator<class_RC::SignatureContainer>_>_>_>_> { // PlaceHolder Structure
};

typedef struct _Locinfo _Locinfo, *P_Locinfo;

struct _Locinfo { // PlaceHolder Structure
};

typedef struct basic_string_view<wchar_t,struct_std::char_traits<wchar_t>_> basic_string_view<wchar_t,struct_std::char_traits<wchar_t>_>, *Pbasic_string_view<wchar_t,struct_std::char_traits<wchar_t>_>;

struct basic_string_view<wchar_t,struct_std::char_traits<wchar_t>_> { // PlaceHolder Structure
};

typedef struct vector<class_std::unique_ptr<class_RC::Output::OutputDevice,struct_std::default_delete<class_RC::Output::OutputDevice>_>,class_std::allocator<class_std::unique_ptr<class_RC::Output::OutputDevice,struct_std::default_delete<class_RC::Output::OutputDevice>_>_>_> vector<class_std::unique_ptr<class_RC::Output::OutputDevice,struct_std::default_delete<class_RC::Output::OutputDevice>_>,class_std::allocator<class_std::unique_ptr<class_RC::Output::OutputDevice,struct_std::default_delete<class_RC::Output::OutputDevice>_>_>_>, *Pvector<class_std::unique_ptr<class_RC::Output::OutputDevice,struct_std::default_delete<class_RC::Output::OutputDevice>_>,class_std::allocator<class_std::unique_ptr<class_RC::Output::OutputDevice,struct_std::default_delete<class_RC::Output::OutputDevice>_>_>_>;

struct vector<class_std::unique_ptr<class_RC::Output::OutputDevice,struct_std::default_delete<class_RC::Output::OutputDevice>_>,class_std::allocator<class_std::unique_ptr<class_RC::Output::OutputDevice,struct_std::default_delete<class_RC::Output::OutputDevice>_>_>_> { // PlaceHolder Structure
};

typedef struct vector<class_RC::LuaMadeSimple::Lua*___ptr64,class_std::allocator<class_RC::LuaMadeSimple::Lua*___ptr64>_> vector<class_RC::LuaMadeSimple::Lua*___ptr64,class_std::allocator<class_RC::LuaMadeSimple::Lua*___ptr64>_>, *Pvector<class_RC::LuaMadeSimple::Lua*___ptr64,class_std::allocator<class_RC::LuaMadeSimple::Lua*___ptr64>_>;

struct vector<class_RC::LuaMadeSimple::Lua*___ptr64,class_std::allocator<class_RC::LuaMadeSimple::Lua*___ptr64>_> { // PlaceHolder Structure
};

typedef int (*_onexit_t)(void);

typedef ulonglong size_t;



undefined DAT_180010f78;
undefined DAT_180010f88;
undefined8 DAT_180010870;
pointer[1] vftable;
undefined DAT_180010f60;
char DAT_180010869;
undefined DAT_180010880;
undefined8 DAT_180010888;
undefined DAT_180010898;
undefined8 UNK_180010878;
undefined8 UNK_180010890;
undefined8 DAT_180010a68;
undefined DAT_180010a08;
undefined DAT_1800108e0;
undefined DAT_1800108d0;
undefined DAT_1800108d4;
undefined DAT_1800108e8;
ulonglong DAT_1800108f0;
pointer PTR_DAT_18000d238;
undefined DAT_180010970;
undefined DAT_18000f410;
char DAT_180010868;
pointer[2] vftable;
int DAT_180010060;
IMAGE_SECTION_HEADER IMAGE_SECTION_HEADER_180000208;
undefined DAT_180000320;
undefined1 DAT_180010850;
undefined DAT_18000f3d8;
pointer[10] vftable;
longlong DAT_180010028;
undefined8 DAT_18000e180;
undefined DAT_18000e288;
undefined8 DAT_18000e3a0;
undefined DAT_18000e4a8;
undefined DAT_18000cad0;
ulonglong DAT_180010028;
ulonglong DAT_180010020;
undefined DAT_180010f98;
undefined DAT_1800108c8;
undefined DAT_18000f2f8;
undefined8 DAT_180010860;
undefined DAT_180010048;
undefined DAT_180010040;
uint DAT_1800108c4;
undefined DAT_180010038;
undefined4 DAT_18001003c;
undefined *PTR_m_num_threads_1800121b0;
void *DAT_180010860;
void *StackBase;
undefined1 DAT_180010868;
undefined *PTR_~SignatureData_1800121e8;
pointer[6] vftable;
TypeDescriptor RTTI_Type_Descriptor;
void *ExceptionList;
int DAT_180010858;
int DAT_1800108b0;
undefined DAT_18000c000;
undefined DAT_18000c220;
undefined DAT_18000c330;
undefined DAT_18000c440;
undefined _guard_dispatch_icall;
longlong DAT_1800108b8;
undefined8 DAT_1800108b8;
undefined thunk_FUN_180006ff8;
undefined DAT_1800109f0;
undefined8 DAT_180010028;
undefined8 DAT_180010020;
undefined8 DAT_1800108f0;
undefined FUN_180006314;
longlong *DAT_180010000;
longlong *DAT_180010008;
longlong DAT_180010010;
undefined8 DAT_180010000;
undefined8 DAT_180010008;
undefined8 DAT_180010010;

void thunk_FUN_180005460(undefined8 param_1,void *param_2,longlong param_3)

{
  void *pvVar1;
  
  pvVar1 = param_2;
  if ((0xfff < (ulonglong)(param_3 * 0xd8)) &&
     (pvVar1 = *(void **)((longlong)param_2 + -8),
     0x1f < (ulonglong)((longlong)param_2 + (-8 - (longlong)pvVar1)))) {
                    // WARNING: Subroutine does not return
    _invalid_parameter_noinfo_noreturn();
  }
  FUN_18000128f(pvVar1);
  return;
}



void entry(HINSTANCE__ *param_1,ulong param_2,void *param_3)

{
  if (param_2 == 1) {
    __security_init_cookie();
  }
  dllmain_dispatch(param_1,param_2,param_3);
  return;
}



undefined8 thunk_FUN_180006ff4(void)

{
  return 0;
}



undefined * thunk_FUN_1800076b0(void)

{
  return &DAT_180010f78;
}



void _guard_check_icall(void)

{
  return;
}



void * __cdecl operator_new(__uint64 param_1)

{
  code *pcVar1;
  int iVar2;
  void *pvVar3;
  
  do {
    pvVar3 = malloc(param_1);
    if (pvVar3 != (void *)0x0) {
      return pvVar3;
    }
    iVar2 = _callnewh(param_1);
  } while (iVar2 != 0);
  if (param_1 == 0xffffffffffffffff) {
    thunk_FUN_180006b18();
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  thunk_FUN_180006af0();
  pcVar1 = (code *)swi(3);
  pvVar3 = (void *)(*pcVar1)();
  return pvVar3;
}



bool __scrt_dllmain_before_initialize_c(void)

{
  undefined8 uVar1;
  
  uVar1 = __scrt_initialize_onexit_tables(0);
  return (char)uVar1 != '\0';
}



undefined * thunk_FUN_1800076bc(void)

{
  return &DAT_180010f88;
}



void thunk_FUN_1800070b0(void)

{
  FUN_1800070b0();
  return;
}



char * thunk_FUN_1800058a0(longlong param_1)

{
  char *pcVar1;
  
  pcVar1 = "Unknown exception";
  if (*(char **)(param_1 + 8) != (char *)0x0) {
    pcVar1 = *(char **)(param_1 + 8);
  }
  return pcVar1;
}



undefined1 thunk_FUN_1800078ac(void)

{
  return 1;
}



undefined8 thunk_FUN_1800078c0(void)

{
  return 0;
}



void thunk_FUN_180005140(void)

{
  code *pcVar1;
  
  std::_Xlength_error("vector too long");
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



_onexit_t __cdecl _onexit(_onexit_t _Func)

{
  int iVar1;
  _onexit_t p_Var2;
  
  if (DAT_180010870 == -1) {
    iVar1 = _crt_atexit();
  }
  else {
    iVar1 = _register_onexit_function(&DAT_180010870);
  }
  p_Var2 = (_onexit_t)0x0;
  if (iVar1 == 0) {
    p_Var2 = _Func;
  }
  return p_Var2;
}



undefined8 * thunk_FUN_1800062dc(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = type_info::vftable;
  if ((param_2 & 1) != 0) {
    FUN_18000128f(param_1);
  }
  return param_1;
}



void thunk_FUN_180005100(void)

{
  code *pcVar1;
  
  std::_Xlength_error("vector too long");
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



void thunk_FUN_18000768c(void)

{
                    // WARNING: Could not recover jumptable at 0x000180007693. Too many branches
                    // WARNING: Treating indirect jump as call
  InitializeSListHead(&DAT_180010f60);
  return;
}



undefined1 thunk_FUN_1800078b8(void)

{
  return 1;
}



// WARNING: This is an inlined function

void _guard_dispatch_icall(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
                    // WARNING: Could not recover jumptable at 0x000180008a60. Too many branches
                    // WARNING: Treating indirect jump as call
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



void __GSHandlerCheckCommon(ulonglong param_1,longlong param_2,uint *param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar2 = param_1;
  if ((*param_3 & 4) != 0) {
    uVar2 = (longlong)(int)param_3[1] + param_1 & (longlong)(int)-param_3[2];
  }
  uVar1 = (ulonglong)*(uint *)(*(longlong *)(param_2 + 0x10) + 8);
  if ((*(byte *)(uVar1 + 3 + *(longlong *)(param_2 + 8)) & 0xf) != 0) {
    param_1 = param_1 + (*(byte *)(uVar1 + 3 + *(longlong *)(param_2 + 8)) & 0xfffffff0);
  }
  thunk_FUN_1800062a0(param_1 ^ *(ulonglong *)((longlong)(int)(*param_3 & 0xfffffff8) + uVar2));
  return;
}



undefined1 thunk_FUN_1800078b0(void)

{
  return 1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 __scrt_initialize_onexit_tables(uint param_1)

{
  code *pcVar1;
  bool bVar2;
  ulonglong in_RAX;
  undefined7 extraout_var;
  undefined8 uVar3;
  
  if (DAT_180010869 == '\0') {
    if (1 < param_1) {
      thunk_FUN_180006d84(5);
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
    bVar2 = __scrt_is_ucrt_dll_in_use();
    if (((int)CONCAT71(extraout_var,bVar2) == 0) || (param_1 != 0)) {
      in_RAX = 0xffffffffffffffff;
      DAT_180010870 = 0xffffffffffffffff;
      uRam0000000180010878 = 0xffffffffffffffff;
      _DAT_180010880 = 0xffffffffffffffff;
      DAT_180010888 = 0xffffffffffffffff;
      uRam0000000180010890 = 0xffffffffffffffff;
      _DAT_180010898 = 0xffffffffffffffff;
    }
    else {
      in_RAX = _initialize_onexit_table(&DAT_180010870);
      if (((int)in_RAX != 0) ||
         (in_RAX = _initialize_onexit_table(&DAT_180010888), (int)in_RAX != 0)) {
        return in_RAX & 0xffffffffffffff00;
      }
    }
    DAT_180010869 = '\x01';
  }
  return CONCAT71((int7)(in_RAX >> 8),1);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void thunk_FUN_1800071d0(undefined4 param_1)

{
  code *pcVar1;
  BOOL BVar2;
  undefined1 *puVar3;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [32];
  
  puVar3 = auStack_28;
  BVar2 = IsProcessorFeaturePresent(0x17);
  if (BVar2 != 0) {
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(param_1);
    puVar3 = auStack_20;
  }
  *(undefined8 *)(puVar3 + -8) = 0x1800071fb;
  capture_current_context((PCONTEXT)&DAT_180010970);
  _DAT_1800108e0 = *(undefined8 *)(puVar3 + 0x28);
  _DAT_180010a08 = puVar3 + 0x30;
  _DAT_1800108d0 = 0xc0000409;
  _DAT_1800108d4 = 1;
  _DAT_1800108e8 = 1;
  DAT_1800108f0 = (ulonglong)*(uint *)(puVar3 + 0x30);
  *(undefined8 *)(puVar3 + -8) = 0x180007267;
  DAT_180010a68 = _DAT_1800108e0;
  __raise_securityfailure((_EXCEPTION_POINTERS *)&PTR_DAT_18000d238);
  return;
}



// WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall

void __cdecl
_eh_vector_destructor_iterator_
          (void *param_1,__uint64 param_2,__uint64 param_3,_func_void_void_ptr *param_4)

{
  void *pvVar1;
  
  pvVar1 = (void *)(param_2 * param_3 + (longlong)param_1);
  while( true ) {
    if (param_3 == 0) break;
    pvVar1 = (void *)((longlong)pvVar1 - param_2);
    (*param_4)(pvVar1);
    param_3 = param_3 - 1;
  }
  return;
}



undefined8 thunk_FUN_180006ff8(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_180006ff8(param_1);
  return uVar1;
}



void thunk_FUN_180006af0(void)

{
  undefined8 auStack_28 [5];
  
  thunk_FUN_180006a94(auStack_28);
                    // WARNING: Subroutine does not return
  _CxxThrowException(auStack_28,(ThrowInfo *)&DAT_18000f410);
}



void uninstall_mod(undefined8 *param_1)

{
                    // 0x10dc  2  uninstall_mod
  if (param_1 != (undefined8 *)0x0) {
                    // WARNING: Could not recover jumptable at 0x0001800059cd. Too many branches
                    // WARNING: Treating indirect jump as call
    (**(code **)*param_1)(param_1,1);
    return;
  }
  return;
}



void thunk_FUN_180002af0(longlong *param_1,longlong *param_2)

{
  if (param_1 != param_2) {
    do {
      thunk_FUN_180004140(param_1);
      param_1 = param_1 + 0x1b;
    } while (param_1 != param_2);
  }
  return;
}



ulonglong * thunk_FUN_180003110(longlong *param_1,longlong *param_2,ulonglong *param_3)

{
  if (param_1 != param_2) {
    do {
      thunk_FUN_1800038c0(param_3,param_1);
      param_3 = param_3 + 0x1b;
      param_1 = param_1 + 0x1b;
    } while (param_1 != param_2);
  }
  return param_3;
}



undefined1 __scrt_uninitialize_crt(undefined8 param_1,char param_2)

{
  if ((DAT_180010868 == '\0') || (param_2 == '\0')) {
    thunk_FUN_1800078b8();
    thunk_FUN_1800078b8();
  }
  return 1;
}



undefined8 * thunk_FUN_180004640(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = std::exception::vftable;
  __std_exception_destroy(param_1 + 1);
  if ((param_2 & 1) != 0) {
    FUN_18000128f(param_1);
  }
  return param_1;
}



bool __scrt_is_ucrt_dll_in_use(void)

{
  return DAT_180010060 != 0;
}



undefined8 * thunk_FUN_180004700(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = std::exception::vftable;
  __std_exception_destroy(param_1 + 1);
  if ((param_2 & 1) != 0) {
    FUN_18000128f(param_1);
  }
  return param_1;
}



void * thunk_FUN_180005260(undefined8 param_1,ulonglong param_2)

{
  code *pcVar1;
  ulonglong uVar2;
  void *pvVar3;
  void *pvVar4;
  
  if (param_2 < 0x8000000000000000) {
    uVar2 = param_2 * 2;
    if (uVar2 < 0x1000) {
      if (uVar2 != 0) {
        pvVar3 = operator_new(uVar2);
        return pvVar3;
      }
      return (void *)0x0;
    }
    if (uVar2 < uVar2 + 0x27) {
      pvVar3 = operator_new(uVar2 + 0x27);
      if (pvVar3 != (void *)0x0) {
        pvVar4 = (void *)((longlong)pvVar3 + 0x27U & 0xffffffffffffffe0);
        *(void **)((longlong)pvVar4 + -8) = pvVar3;
        return pvVar4;
      }
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
  }
  thunk_FUN_180004ee0();
  pcVar1 = (code *)swi(3);
  pvVar3 = (void *)(*pcVar1)();
  return pvVar3;
}



// WARNING: Removing unreachable block (ram,0x000180006031)
// WARNING: Enum "SectionFlags": Some values do not have unique names

ulonglong thunk_FUN_180005fa4(longlong param_1)

{
  ulonglong uVar1;
  uint7 uVar2;
  IMAGE_SECTION_HEADER *pIVar3;
  
  uVar1 = 0;
  for (pIVar3 = &IMAGE_SECTION_HEADER_180000208; pIVar3 != (IMAGE_SECTION_HEADER *)&DAT_180000320;
      pIVar3 = pIVar3 + 1) {
    if (((ulonglong)(uint)pIVar3->VirtualAddress <= param_1 - 0x180000000U) &&
       (uVar1 = (ulonglong)((pIVar3->Misc).PhysicalAddress + pIVar3->VirtualAddress),
       param_1 - 0x180000000U < uVar1)) goto LAB_18000601a;
  }
  pIVar3 = (IMAGE_SECTION_HEADER *)0x0;
LAB_18000601a:
  if (pIVar3 == (IMAGE_SECTION_HEADER *)0x0) {
    uVar1 = uVar1 & 0xffffffffffffff00;
  }
  else {
    uVar2 = (uint7)(uVar1 >> 8);
    if ((int)pIVar3->Characteristics < 0) {
      uVar1 = (ulonglong)uVar2 << 8;
    }
    else {
      uVar1 = CONCAT71(uVar2,1);
    }
  }
  return uVar1;
}



undefined1 thunk_FUN_1800078b4(void)

{
  return 1;
}



void thunk_FUN_1800037b0(undefined4 *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  vector<> *pvVar4;
  longlong *plVar5;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  pvVar4 = RC::Output::DefaultTargets::get_default_devices_ref();
  plVar5 = *(longlong **)pvVar4;
  plVar1 = *(longlong **)(pvVar4 + 8);
  while( true ) {
    if (plVar5 == plVar1) {
      return;
    }
    pvVar4 = RC::Output::DefaultTargets::get_default_devices_ref();
    if ((*(longlong *)pvVar4 == *(longlong *)(pvVar4 + 8)) ||
       ((longlong *)*plVar5 == (longlong *)0x0)) break;
    cVar3 = (**(code **)(*(longlong *)*plVar5 + 8))();
    plVar2 = (longlong *)*plVar5;
    uStack_28 = *param_1;
    uStack_24 = param_1[1];
    uStack_20 = param_1[2];
    uStack_1c = param_1[3];
    if (cVar3 == '\0') {
      (**(code **)(*plVar2 + 0x10))(plVar2,&uStack_28);
    }
    else {
      (**(code **)(*plVar2 + 0x18))(plVar2,&uStack_28,3);
    }
    plVar5 = plVar5 + 1;
  }
  DAT_180010850 = 1;
  thunk_FUN_180003ce0((undefined8 *)&uStack_28,
                      "[Output::send] Attempted to send but there were no default devices. Please specify at least one default device or construct a Targets object and supply your own devices."
                     );
                    // WARNING: Subroutine does not return
  _CxxThrowException(&uStack_28,(ThrowInfo *)&DAT_18000f3d8);
}



void thunk_FUN_180003de0(longlong param_1)

{
  FUN_180003de0(param_1);
  return;
}



CppUserModBase * thunk_FUN_180004590(CppUserModBase *param_1,uint param_2)

{
  *(undefined ***)param_1 = RC::AllowModsMod::vftable;
  RC::CppUserModBase::~CppUserModBase(param_1);
  if ((param_2 & 1) != 0) {
    FUN_18000128f(param_1);
  }
  return param_1;
}



undefined1 FUN_18000116d(void)

{
  return 1;
}



undefined1 thunk_FUN_1800078b0(void)

{
  return 1;
}



void thunk_FUN_1800062a0(longlong param_1)

{
  if ((param_1 == DAT_180010028) && ((short)((ulonglong)param_1 >> 0x30) == 0)) {
    return;
  }
  thunk_FUN_1800070b0();
  return;
}



undefined8 DllMain(HMODULE param_1,int param_2)

{
  if (param_2 == 1) {
    DisableThreadLibraryCalls(param_1);
  }
  return 1;
}



void thunk_FUN_180003700(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  
  uVar3 = (ulonglong)((longlong)param_2 + (7 - (longlong)param_1)) >> 3;
  if (param_2 < param_1) {
    uVar3 = 0;
  }
  if ((uVar3 != 0) && (1 < uVar3)) {
    uVar1 = *param_3;
    if ((param_3 < param_1) || (param_1 + (uVar3 - 1) < param_3)) {
      puVar4 = param_1;
      for (uVar2 = uVar3 & 0x1ffffffffffffffe; uVar2 != 0; uVar2 = uVar2 - 1) {
        *puVar4 = uVar1;
        puVar4 = puVar4 + 1;
      }
      param_1 = param_1 + (uVar3 & 0xfffffffffffffffe);
    }
  }
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    *param_1 = *param_3;
  }
  return;
}



void thunk_FUN_1800050e0(void)

{
  code *pcVar1;
  
  std::_Xlength_error("string too long");
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



undefined8 thunk_FUN_180006d60(void)

{
  return 1;
}



ulonglong * thunk_FUN_180002b40(longlong *param_1,longlong *param_2,longlong *param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong *plVar3;
  void *pvVar4;
  code *pcVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong *puVar8;
  longlong lVar9;
  longlong *plVar10;
  void *pvVar11;
  ulonglong *puVar12;
  ulonglong uVar13;
  
  lVar2 = *param_1;
  lVar9 = ((longlong)param_2 - lVar2) / 0x36 + ((longlong)param_2 - lVar2 >> 0x3f);
  lVar6 = (param_1[1] - lVar2) / 0xd8;
  if (lVar6 == 0x12f684bda12f684) {
    thunk_FUN_180005140();
    pcVar5 = (code *)swi(3);
    puVar8 = (ulonglong *)(*pcVar5)();
    return puVar8;
  }
  uVar1 = lVar6 + 1;
  uVar7 = (param_1[2] - lVar2) / 0xd8;
  uVar13 = 0x12f684bda12f684;
  if ((uVar7 <= 0x12f684bda12f684 - (uVar7 >> 1)) && (uVar13 = (uVar7 >> 1) + uVar7, uVar13 < uVar1)
     ) {
    uVar13 = uVar1;
  }
  puVar8 = (ulonglong *)thunk_FUN_1800051d0(param_1,uVar13);
  puVar12 = puVar8 + ((lVar9 >> 2) - (lVar9 >> 0x3f)) * 0x1b;
  thunk_FUN_1800038c0(puVar12,param_3);
  if (param_2 == (longlong *)param_1[1]) {
    thunk_FUN_180003110((longlong *)*param_1,(longlong *)param_1[1],puVar8);
  }
  else {
    thunk_FUN_180003190((longlong *)*param_1,param_2,puVar8);
    thunk_FUN_180003190(param_2,(undefined8 *)param_1[1],puVar12 + 0x1b);
  }
  plVar10 = (longlong *)*param_1;
  if (plVar10 != (longlong *)0x0) {
    plVar3 = (longlong *)param_1[1];
    for (; plVar10 != plVar3; plVar10 = plVar10 + 0x1b) {
      thunk_FUN_180004140(plVar10);
    }
    pvVar4 = (void *)*param_1;
    pvVar11 = pvVar4;
    if ((0xfff < (ulonglong)(((param_1[2] - (longlong)pvVar4) / 0xd8) * 0xd8)) &&
       (pvVar11 = *(void **)((longlong)pvVar4 + -8),
       0x1f < (ulonglong)((longlong)pvVar4 + (-8 - (longlong)pvVar11)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_18000128f(pvVar11);
  }
  *param_1 = (longlong)puVar8;
  param_1[1] = (longlong)(puVar8 + uVar1 * 0x1b);
  param_1[2] = (longlong)(puVar8 + uVar13 * 0x1b);
  return puVar12;
}



void __raise_securityfailure(_EXCEPTION_POINTERS *param_1)

{
  HANDLE pvVar1;
  
  SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)0x0);
  UnhandledExceptionFilter(param_1);
  pvVar1 = GetCurrentProcess();
                    // WARNING: Could not recover jumptable at 0x000180007099. Too many branches
                    // WARNING: Treating indirect jump as call
  TerminateProcess(pvVar1,0xc0000409);
  return;
}



// WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall

void thunk_FUN_1800076f8(void)

{
  undefined8 *puVar1;
  
  for (puVar1 = &DAT_18000e180; puVar1 < &DAT_18000e288; puVar1 = puVar1 + 1) {
    if ((code *)*puVar1 != (code *)0x0) {
      (*(code *)*puVar1)();
    }
  }
  return;
}



undefined8 * thunk_FUN_1800045e0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = std::exception::vftable;
  __std_exception_destroy(param_1 + 1);
  if ((param_2 & 1) != 0) {
    FUN_18000128f(param_1);
  }
  return param_1;
}



void thunk_FUN_180004b90(longlong param_1,ulonglong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  code *pcVar7;
  longlong *plVar8;
  ulonglong uVar9;
  longlong lVar10;
  undefined8 *puVar11;
  
  for (lVar10 = 0x3f; 0xfffffffffffffffU >> lVar10 == 0; lVar10 = lVar10 + -1) {
  }
  if ((ulonglong)(1L << ((byte)lVar10 & 0x3f)) < param_2) {
    std::_Xlength_error("invalid hash bucket count");
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  plVar1 = *(longlong **)(param_1 + 8);
  uVar9 = param_2 - 1 | 1;
  lVar10 = 0x3f;
  if (uVar9 != 0) {
    for (; uVar9 >> lVar10 == 0; lVar10 = lVar10 + -1) {
    }
  }
  lVar10 = 1L << ((char)lVar10 + 1U & 0x3f);
  thunk_FUN_180004760((longlong *)(param_1 + 0x18),lVar10 * 2,plVar1);
  *(longlong *)(param_1 + 0x38) = lVar10;
  *(longlong *)(param_1 + 0x30) = lVar10 + -1;
  plVar8 = (longlong *)**(undefined8 **)(param_1 + 8);
joined_r0x000180004c05:
  do {
    while( true ) {
      while( true ) {
        if (plVar8 == plVar1) {
          return;
        }
        plVar2 = (longlong *)*plVar8;
        puVar11 = (undefined8 *)
                  (((((((ulonglong)*(byte *)(plVar8 + 2) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                      (ulonglong)*(byte *)((longlong)plVar8 + 0x11)) * 0x100000001b3 ^
                     (ulonglong)*(byte *)((longlong)plVar8 + 0x12)) * 0x100000001b3 ^
                    (ulonglong)*(byte *)((longlong)plVar8 + 0x13)) * 0x100000001b3 &
                   *(ulonglong *)(param_1 + 0x30)) * 0x10 + *(longlong *)(param_1 + 0x18));
        if ((longlong *)*puVar11 != plVar1) break;
        *puVar11 = plVar8;
        puVar11[1] = plVar8;
        plVar8 = plVar2;
      }
      plVar3 = (longlong *)puVar11[1];
      if ((int)plVar8[2] != (int)plVar3[2]) break;
      plVar3 = (longlong *)*plVar3;
      if (plVar3 != plVar8) {
        plVar4 = (longlong *)plVar8[1];
        *plVar4 = (longlong)plVar2;
        puVar5 = (undefined8 *)plVar2[1];
        *puVar5 = plVar3;
        puVar6 = (undefined8 *)plVar3[1];
        *puVar6 = plVar8;
        plVar3[1] = (longlong)puVar5;
        plVar2[1] = (longlong)plVar4;
        plVar8[1] = (longlong)puVar6;
      }
      puVar11[1] = plVar8;
      plVar8 = plVar2;
    }
    do {
      if ((longlong *)*puVar11 == plVar3) {
        plVar4 = (longlong *)plVar8[1];
        *plVar4 = (longlong)plVar2;
        puVar5 = (undefined8 *)plVar2[1];
        *puVar5 = plVar3;
        puVar6 = (undefined8 *)plVar3[1];
        *puVar6 = plVar8;
        plVar3[1] = (longlong)puVar5;
        plVar2[1] = (longlong)plVar4;
        plVar8[1] = (longlong)puVar6;
        *puVar11 = plVar8;
        plVar8 = plVar2;
        goto joined_r0x000180004c05;
      }
      plVar3 = (longlong *)plVar3[1];
    } while ((int)plVar8[2] != (int)plVar3[2]);
    lVar10 = *plVar3;
    plVar3 = (longlong *)plVar8[1];
    *plVar3 = (longlong)plVar2;
    plVar4 = (longlong *)plVar2[1];
    *plVar4 = lVar10;
    puVar11 = *(undefined8 **)(lVar10 + 8);
    *puVar11 = plVar8;
    *(longlong **)(lVar10 + 8) = plVar4;
    plVar2[1] = (longlong)plVar3;
    plVar8[1] = (longlong)puVar11;
    plVar8 = plVar2;
  } while( true );
}



// WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall

void _RTC_Terminate(void)

{
  undefined8 *puVar1;
  
  for (puVar1 = &DAT_18000e3a0; puVar1 < &DAT_18000e4a8; puVar1 = puVar1 + 1) {
    if ((code *)*puVar1 != (code *)0x0) {
      (*(code *)*puVar1)();
    }
  }
  return;
}



CppUserModBase * start_mod(void)

{
  CppUserModBase *this;
  wchar_t *pwStack_18;
  undefined8 uStack_10;
  
                    // 0x11db  1  start_mod
  this = (CppUserModBase *)operator_new(0xc0);
  if (this != (CppUserModBase *)0x0) {
    RC::CppUserModBase::CppUserModBase(this);
    *(undefined ***)this = RC::AllowModsMod::vftable;
    thunk_FUN_1800052f0((longlong *)(this + 0x40),&DAT_18000cad0,3);
    thunk_FUN_1800052f0((longlong *)(this + 0x20),L"AllowModsMod",0xc);
    thunk_FUN_1800052f0((longlong *)(this + 0x80),L"Narknon + Truman",0x10);
    thunk_FUN_1800052f0((longlong *)(this + 0x60),L"Allows asset mods to load in PAYDAY 3",0x25);
    pwStack_18 = L"[AllowModsMod]: Init.\n";
    uStack_10 = 0x16;
    thunk_FUN_1800037b0((undefined4 *)&pwStack_18);
    thunk_FUN_1800054c0();
    return this;
  }
  return (CppUserModBase *)0x0;
}



undefined1 thunk_FUN_1800078b4(void)

{
  return 1;
}



undefined1 thunk_FUN_1800078b8(void)

{
  return 1;
}



void * thunk_FUN_1800051d0(undefined8 param_1,ulonglong param_2)

{
  code *pcVar1;
  void *pvVar2;
  void *pvVar3;
  __uint64 _Var4;
  
  if (param_2 < 0x12f684bda12f685) {
    _Var4 = param_2 * 0xd8;
    if (_Var4 < 0x1000) {
      if (_Var4 != 0) {
        pvVar2 = operator_new(_Var4);
        return pvVar2;
      }
      return (void *)0x0;
    }
    if (_Var4 < _Var4 + 0x27) {
      pvVar2 = operator_new(_Var4 + 0x27);
      if (pvVar2 != (void *)0x0) {
        pvVar3 = (void *)((longlong)pvVar2 + 0x27U & 0xffffffffffffffe0);
        *(void **)((longlong)pvVar3 + -8) = pvVar2;
        return pvVar3;
      }
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
  }
  thunk_FUN_180004ee0();
  pcVar1 = (code *)swi(3);
  pvVar2 = (void *)(*pcVar1)();
  return pvVar2;
}



undefined1 thunk_FUN_1800078bc(void)

{
  return 1;
}



void __cdecl __security_init_cookie(void)

{
  DWORD DVar1;
  _FILETIME _StackX_8;
  LARGE_INTEGER LStackX_10;
  _FILETIME a_Stack_18 [2];
  
  if (DAT_180010028 == 0x2b992ddfa232) {
    _StackX_8.dwLowDateTime = 0;
    _StackX_8.dwHighDateTime = 0;
    GetSystemTimeAsFileTime(&_StackX_8);
    a_Stack_18[0] = _StackX_8;
    DVar1 = GetCurrentThreadId();
    a_Stack_18[0] = (_FILETIME)((ulonglong)a_Stack_18[0] ^ (ulonglong)DVar1);
    DVar1 = GetCurrentProcessId();
    a_Stack_18[0] = (_FILETIME)((ulonglong)a_Stack_18[0] ^ (ulonglong)DVar1);
    QueryPerformanceCounter(&LStackX_10);
    DAT_180010028 =
         ((ulonglong)LStackX_10.s.LowPart << 0x20 ^
          CONCAT44(LStackX_10.s.HighPart,LStackX_10.s.LowPart) ^ (ulonglong)a_Stack_18[0] ^
         (ulonglong)a_Stack_18) & 0xffffffffffff;
    if (DAT_180010028 == 0x2b992ddfa232) {
      DAT_180010028 = 0x2b992ddfa233;
    }
  }
  DAT_180010020 = ~DAT_180010028;
  return;
}



undefined * thunk_FUN_1800076ec(void)

{
  return &DAT_180010f98;
}



void thunk_FUN_1800076a0(void)

{
  __std_type_info_destroy_list(&DAT_180010f60);
  return;
}



undefined8 * thunk_FUN_180003190(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  if (param_1 != param_2) {
    puVar5 = param_1 + 0x15;
    do {
      uVar4 = puVar5[-0x13];
      puVar5[-0x13] = 0;
      uVar1 = puVar5[-0x14];
      puVar5[-0x14] = 0;
      uVar2 = puVar5[-0x15];
      puVar5[-0x15] = 0;
      *param_3 = uVar2;
      param_3[1] = uVar1;
      param_3[2] = uVar4;
      param_3[10] = 0;
      puVar3 = (undefined8 *)puVar5[-0xb];
      if (puVar3 != (undefined8 *)0x0) {
        uVar4 = (**(code **)*puVar3)(puVar3,param_3 + 3);
        param_3[10] = uVar4;
      }
      param_3[0x12] = 0;
      puVar3 = (undefined8 *)puVar5[-3];
      if (puVar3 != (undefined8 *)0x0) {
        uVar4 = (**(code **)*puVar3)(puVar3,param_3 + 0xb);
        param_3[0x12] = uVar4;
      }
      *(undefined1 *)(param_3 + 0x13) = *(undefined1 *)(puVar5 + -2);
      uVar4 = puVar5[1];
      puVar5[1] = 0;
      uVar1 = *puVar5;
      *puVar5 = 0;
      uVar2 = puVar5[-1];
      puVar5[-1] = 0;
      param_3[0x14] = uVar2;
      param_3[0x15] = uVar1;
      param_3[0x16] = uVar4;
      *(undefined1 *)(param_3 + 0x17) = *(undefined1 *)(puVar5 + 2);
      *(undefined1 *)((longlong)param_3 + 0xb9) = *(undefined1 *)((longlong)puVar5 + 0x11);
      param_3[0x18] = puVar5[3];
      param_3[0x19] = puVar5[4];
      param_3[0x1a] = puVar5[5];
      param_3 = param_3 + 0x1b;
      puVar3 = puVar5 + 6;
      puVar5 = puVar5 + 0x1b;
    } while (puVar3 != param_2);
  }
  return param_3;
}



void __scrt_dllmain_uninitialize_critical(void)

{
  FUN_18000116d();
  thunk_FUN_1800078bc();
  return;
}



void thunk_FUN_180004ff0(longlong *param_1)

{
  longlong *plVar1;
  void *pvVar2;
  longlong *plVar3;
  void *pvVar4;
  
  plVar3 = (longlong *)*param_1;
  if (plVar3 != (longlong *)0x0) {
    plVar1 = (longlong *)param_1[1];
    for (; plVar3 != plVar1; plVar3 = plVar3 + 0x1b) {
      thunk_FUN_180004140(plVar3);
    }
    pvVar2 = (void *)*param_1;
    pvVar4 = pvVar2;
    if ((0xfff < (ulonglong)(((param_1[2] - (longlong)pvVar2) / 0xd8) * 0xd8)) &&
       (pvVar4 = *(void **)((longlong)pvVar2 + -8),
       0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)pvVar4)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_18000128f(pvVar4);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}



undefined1 thunk_FUN_180005d78(void)

{
  char cVar1;
  
  cVar1 = thunk_FUN_1800078b0();
  if (cVar1 != '\0') {
    cVar1 = thunk_FUN_1800078b0();
    if (cVar1 != '\0') {
      return 1;
    }
    thunk_FUN_1800078b4();
  }
  return 0;
}



undefined1 thunk_FUN_1800078ac(void)

{
  return 1;
}



void thunk_FUN_1800076c8(void)

{
  ulonglong *puVar1;
  
  puVar1 = (ulonglong *)thunk_FUN_1800076b0();
  *puVar1 = *puVar1 | 0x24;
  puVar1 = (ulonglong *)thunk_FUN_1800076bc();
  *puVar1 = *puVar1 | 2;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void thunk_FUN_180006d78(void)

{
  _DAT_1800108c8 = 0;
  return;
}



void thunk_FUN_180005120(void)

{
  code *pcVar1;
  
  std::_Xlength_error("vector too long");
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



undefined8 *
thunk_FUN_1800028c0(undefined8 *param_1,undefined8 param_2,undefined4 *param_3,longlong *param_4)

{
  longlong *plVar1;
  code *pcVar2;
  void *pvVar3;
  void *pvVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  longlong *plVar7;
  void *pvVar8;
  ulonglong *puVar9;
  
  *param_1 = param_2;
  pvVar8 = (void *)0x0;
  param_1[1] = 0;
  pvVar3 = operator_new(0x30);
  param_1[1] = pvVar3;
  *(undefined4 *)((longlong)pvVar3 + 0x10) = *param_3;
  puVar5 = (undefined8 *)((longlong)pvVar3 + 0x18);
  *puVar5 = 0;
  *(undefined8 *)((longlong)pvVar3 + 0x20) = 0;
  *(undefined8 *)((longlong)pvVar3 + 0x28) = 0;
  uVar6 = (param_4[1] - *param_4) / 0xd8;
  if (uVar6 != 0) {
    if (0x12f684bda12f684 < uVar6) {
LAB_180002a04:
      thunk_FUN_180005140();
      pcVar2 = (code *)swi(3);
      puVar5 = (undefined8 *)(*pcVar2)();
      return puVar5;
    }
    uVar6 = uVar6 * 0xd8;
    if (uVar6 < 0x1000) {
      if (uVar6 != 0) {
        pvVar8 = operator_new(uVar6);
      }
    }
    else {
      if (uVar6 + 0x27 <= uVar6) {
        thunk_FUN_180004ee0();
        goto LAB_180002a04;
      }
      pvVar4 = operator_new(uVar6 + 0x27);
      if (pvVar4 == (void *)0x0) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      pvVar8 = (void *)((longlong)pvVar4 + 0x27U & 0xffffffffffffffe0);
      *(void **)((longlong)pvVar8 + -8) = pvVar4;
    }
    *puVar5 = pvVar8;
    *(void **)((longlong)pvVar3 + 0x20) = pvVar8;
    *(void **)((longlong)pvVar3 + 0x28) = (void *)(uVar6 + (longlong)pvVar8);
    puVar9 = (ulonglong *)*puVar5;
    plVar1 = (longlong *)param_4[1];
    for (plVar7 = (longlong *)*param_4; plVar7 != plVar1; plVar7 = plVar7 + 0x1b) {
      thunk_FUN_1800038c0(puVar9,plVar7);
      puVar9 = puVar9 + 0x1b;
    }
    *(ulonglong **)((longlong)pvVar3 + 0x20) = puVar9;
  }
  return param_1;
}



undefined8 __scrt_dllmain_after_initialize_c(void)

{
  bool bVar1;
  undefined7 extraout_var;
  undefined8 uVar2;
  ulonglong uVar3;
  
  bVar1 = __scrt_is_ucrt_dll_in_use();
  if ((int)CONCAT71(extraout_var,bVar1) == 0) {
    uVar3 = thunk_FUN_180006d60();
    uVar3 = _configure_narrow_argv(uVar3 & 0xffffffff);
    if ((int)uVar3 != 0) {
      return uVar3 & 0xffffffffffffff00;
    }
    uVar2 = _initialize_narrow_environment();
  }
  else {
    uVar2 = thunk_FUN_180006b48();
  }
  return CONCAT71((int7)((ulonglong)uVar2 >> 8),1);
}



void thunk_FUN_180004ee0(void)

{
  undefined8 auStack_28 [5];
  
  thunk_FUN_180003c20(auStack_28);
                    // WARNING: Subroutine does not return
  _CxxThrowException(auStack_28,(ThrowInfo *)&DAT_18000f2f8);
}



void FUN_18000128f(void *param_1)

{
                    // WARNING: Could not recover jumptable at 0x0001800078a4. Too many branches
                    // WARNING: Treating indirect jump as call
  free(param_1);
  return;
}



void __scrt_release_startup_lock(char param_1)

{
  bool bVar1;
  undefined3 extraout_var;
  
  bVar1 = __scrt_is_ucrt_dll_in_use();
  if ((CONCAT31(extraout_var,bVar1) != 0) && (param_1 == '\0')) {
    LOCK();
    DAT_180010860 = 0;
    UNLOCK();
  }
  return;
}



// WARNING: Removing unreachable block (ram,0x000180006c12)
// WARNING: Removing unreachable block (ram,0x000180006b82)
// WARNING: Removing unreachable block (ram,0x000180006b5b)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 thunk_FUN_180006b48(void)

{
  int *piVar1;
  uint *puVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  byte in_XCR0;
  
  piVar1 = (int *)cpuid_basic_info(0);
  uVar6 = 0;
  puVar2 = (uint *)cpuid_Version_info(1);
  uVar4 = puVar2[3];
  if ((piVar1[2] == 0x49656e69 && piVar1[3] == 0x6c65746e) && piVar1[1] == 0x756e6547) {
    _DAT_180010048 = 0xffffffffffffffff;
    uVar5 = *puVar2 & 0xfff3ff0;
    _DAT_180010040 = 0x8000;
    if ((((uVar5 == 0x106c0) || (uVar5 == 0x20660)) || (uVar5 == 0x20670)) ||
       ((uVar5 - 0x30650 < 0x21 &&
        ((0x100010001U >> ((ulonglong)(uVar5 - 0x30650) & 0x3f) & 1) != 0)))) {
      DAT_1800108c4 = DAT_1800108c4 | 1;
    }
  }
  if (6 < *piVar1) {
    lVar3 = cpuid_Extended_Feature_Enumeration_info(7);
    uVar6 = *(uint *)(lVar3 + 4);
    if ((uVar6 >> 9 & 1) != 0) {
      DAT_1800108c4 = DAT_1800108c4 | 2;
    }
  }
  _DAT_180010038 = 1;
  DAT_18001003c = 2;
  if ((uVar4 >> 0x14 & 1) != 0) {
    _DAT_180010038 = 2;
    DAT_18001003c = 6;
    if ((((uVar4 >> 0x1b & 1) != 0) && ((uVar4 >> 0x1c & 1) != 0)) && ((in_XCR0 & 6) == 6)) {
      DAT_18001003c = 0xe;
      _DAT_180010038 = 3;
      if ((uVar6 & 0x20) != 0) {
        _DAT_180010038 = 5;
        DAT_18001003c = 0x2e;
        if (((uVar6 & 0xd0030000) == 0xd0030000) && ((in_XCR0 & 0xe0) == 0xe0)) {
          DAT_18001003c = 0x6e;
          _DAT_180010038 = 6;
        }
      }
    }
  }
  return 0;
}



void thunk_FUN_180006d84(undefined4 param_1)

{
  code *pcVar1;
  BOOL BVar2;
  LONG LVar3;
  PRUNTIME_FUNCTION FunctionEntry;
  undefined1 *puVar4;
  undefined8 unaff_retaddr;
  DWORD64 DStackX_10;
  undefined1 auStackX_18 [8];
  undefined1 auStackX_20 [8];
  undefined1 auStack_5c8 [8];
  undefined1 auStack_5c0 [232];
  undefined1 auStack_4d8 [152];
  undefined1 *puStack_440;
  DWORD64 DStack_3e0;
  
  puVar4 = auStack_5c8;
  BVar2 = IsProcessorFeaturePresent(0x17);
  if (BVar2 != 0) {
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(param_1);
    puVar4 = auStack_5c0;
  }
  *(undefined8 *)(puVar4 + -8) = 0x180006db8;
  thunk_FUN_180006d78();
  *(undefined8 *)(puVar4 + -8) = 0x180006dc9;
  memset(auStack_4d8,0,0x4d0);
  *(undefined8 *)(puVar4 + -8) = 0x180006dd3;
  RtlCaptureContext(auStack_4d8);
  *(undefined8 *)(puVar4 + -8) = 0x180006ded;
  FunctionEntry = RtlLookupFunctionEntry(DStack_3e0,&DStackX_10,(PUNWIND_HISTORY_TABLE)0x0);
  if (FunctionEntry != (PRUNTIME_FUNCTION)0x0) {
    *(undefined8 *)(puVar4 + 0x38) = 0;
    *(undefined1 **)(puVar4 + 0x30) = auStackX_18;
    *(undefined1 **)(puVar4 + 0x28) = auStackX_20;
    *(undefined1 **)(puVar4 + 0x20) = auStack_4d8;
    *(undefined8 *)(puVar4 + -8) = 0x180006e2e;
    RtlVirtualUnwind(0,DStackX_10,DStack_3e0,FunctionEntry,*(PCONTEXT *)(puVar4 + 0x20),
                     *(PVOID **)(puVar4 + 0x28),*(PDWORD64 *)(puVar4 + 0x30),
                     *(PKNONVOLATILE_CONTEXT_POINTERS *)(puVar4 + 0x38));
  }
  puStack_440 = &stack0x00000008;
  *(undefined8 *)(puVar4 + -8) = 0x180006e60;
  memset(puVar4 + 0x50,0,0x98);
  *(undefined8 *)(puVar4 + 0x60) = unaff_retaddr;
  *(undefined4 *)(puVar4 + 0x50) = 0x40000015;
  *(undefined4 *)(puVar4 + 0x54) = 1;
  *(undefined8 *)(puVar4 + -8) = 0x180006e82;
  BVar2 = IsDebuggerPresent();
  *(undefined1 **)(puVar4 + 0x40) = puVar4 + 0x50;
  *(undefined1 **)(puVar4 + 0x48) = auStack_4d8;
  *(undefined8 *)(puVar4 + -8) = 0x180006ea3;
  SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)0x0);
  *(undefined8 *)(puVar4 + -8) = 0x180006eae;
  LVar3 = UnhandledExceptionFilter((_EXCEPTION_POINTERS *)(puVar4 + 0x40));
  if ((LVar3 == 0) && (BVar2 != 1)) {
    *(undefined8 *)(puVar4 + -8) = 0x180006ebe;
    thunk_FUN_180006d78();
  }
  return;
}



void thunk_FUN_1800054c0(void)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  void *pvVar5;
  longlong *plVar6;
  undefined1 auStack_1a8 [32];
  undefined1 auStack_188 [4];
  undefined4 uStack_184;
  longlong *plStack_180;
  longlong *plStack_178;
  longlong lStack_170;
  float afStack_168 [2];
  undefined8 *puStack_160;
  undefined8 uStack_158;
  void *pvStack_150;
  undefined8 uStack_148;
  longlong lStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 *puStack_118;
  undefined1 *puStack_110;
  undefined8 *puStack_108;
  longlong alStack_f8 [3];
  longlong alStack_e0 [7];
  longlong *plStack_a8;
  longlong alStack_a0 [7];
  longlong *plStack_68;
  void *pvStack_58;
  undefined8 uStack_50;
  longlong lStack_48;
  ulonglong uStack_18;
  
  uStack_18 = DAT_180010028 ^ (ulonglong)auStack_1a8;
  uStack_128 = 0;
  auStack_188[0] = 0;
  uStack_120 = 0;
  puStack_118 = &uStack_128;
  puStack_110 = auStack_188;
  puStack_108 = &uStack_120;
  FUN_1800042a0(&puStack_118,alStack_f8);
  plStack_180 = (longlong *)0x0;
  plStack_178 = (longlong *)0x0;
  lStack_170 = 0;
  thunk_FUN_180002b40((longlong *)&plStack_180,(longlong *)0x0,alStack_f8);
  afStack_168[0] = 0.0;
  puStack_160 = (undefined8 *)0x0;
  uStack_158 = 0;
  puStack_160 = (undefined8 *)operator_new(0x30);
  *puStack_160 = puStack_160;
  puStack_160[1] = puStack_160;
  pvStack_150 = (void *)0x0;
  uStack_148 = 0;
  lStack_140 = 0;
  uStack_138 = 7;
  uStack_130 = 8;
  afStack_168[0] = 1.0;
  thunk_FUN_180004760((longlong *)&pvStack_150,0x10,puStack_160);
  uStack_184 = 0x1f;
  thunk_FUN_180003350(afStack_168,&puStack_118,(byte *)&uStack_184,(longlong *)&plStack_180);
  uVar1 = *(undefined4 *)m_num_threads_exref;
  *(undefined4 *)m_num_threads_exref = 1;
  RC::SinglePassScanner::start_scan((unordered_map<> *)afStack_168);
  *(undefined4 *)m_num_threads_exref = uVar1;
  if (pvStack_150 != (void *)0x0) {
    pvVar5 = pvStack_150;
    if ((0xfff < (ulonglong)((lStack_140 - (longlong)pvStack_150 >> 3) * 8)) &&
       (pvVar5 = *(void **)((longlong)pvStack_150 + -8),
       0x1f < (ulonglong)((longlong)pvStack_150 + (-8 - (longlong)pvVar5)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_18000128f(pvVar5);
    pvStack_150 = (void *)0x0;
    uStack_148 = 0;
    lStack_140 = 0;
  }
  *(undefined8 *)puStack_160[1] = 0;
  puVar3 = (undefined8 *)*puStack_160;
  while (puVar3 != (undefined8 *)0x0) {
    puVar2 = (undefined8 *)*puVar3;
    thunk_FUN_180004ff0(puVar3 + 3);
    FUN_18000128f(puVar3);
    puVar3 = puVar2;
  }
  FUN_18000128f(puStack_160);
  plVar4 = plStack_178;
  plVar6 = plStack_180;
  if (plStack_180 != (longlong *)0x0) {
    for (; plVar6 != plVar4; plVar6 = plVar6 + 0x1b) {
      thunk_FUN_180004140(plVar6);
    }
    plVar6 = plStack_180;
    if ((0xfff < (ulonglong)(((lStack_170 - (longlong)plStack_180) / 0xd8) * 0xd8)) &&
       (plVar6 = (longlong *)plStack_180[-1],
       0x1f < (ulonglong)((longlong)plStack_180 + (-8 - (longlong)plVar6)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_18000128f(plVar6);
    plStack_180 = (longlong *)0x0;
    plStack_178 = (longlong *)0x0;
    lStack_170 = 0;
  }
  if (pvStack_58 != (void *)0x0) {
    pvVar5 = pvStack_58;
    if ((0xfff < (lStack_48 - (longlong)pvStack_58 & 0xfffffffffffffff0U)) &&
       (pvVar5 = *(void **)((longlong)pvStack_58 + -8),
       0x1f < (ulonglong)((longlong)pvStack_58 + (-8 - (longlong)pvVar5)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_18000128f(pvVar5);
    pvStack_58 = (void *)0x0;
    uStack_50 = 0;
    lStack_48 = 0;
  }
  if (plStack_68 != (longlong *)0x0) {
    (**(code **)(*plStack_68 + 0x20))
              (plStack_68,CONCAT71((int7)((ulonglong)alStack_a0 >> 8),plStack_68 != alStack_a0));
    plStack_68 = (longlong *)0x0;
  }
  if (plStack_a8 != (longlong *)0x0) {
    (**(code **)(*plStack_a8 + 0x20))
              (plStack_a8,CONCAT71((int7)((ulonglong)alStack_e0 >> 8),plStack_a8 != alStack_e0));
    plStack_a8 = (longlong *)0x0;
  }
  thunk_FUN_180004f10(alStack_f8);
  thunk_FUN_1800062a0(uStack_18 ^ (ulonglong)auStack_1a8);
  return;
}



undefined8 * thunk_FUN_180003c20(undefined8 *param_1)

{
  param_1[2] = 0;
  param_1[1] = "bad array new length";
  *param_1 = std::bad_array_new_length::vftable;
  return param_1;
}



ulonglong __scrt_acquire_startup_lock(void)

{
  void *pvVar1;
  bool bVar2;
  undefined7 extraout_var;
  ulonglong uVar4;
  void *pvVar3;
  
  bVar2 = __scrt_is_ucrt_dll_in_use();
  pvVar3 = (void *)CONCAT71(extraout_var,bVar2);
  if ((int)pvVar3 == 0) {
LAB_180005cfe:
    uVar4 = (ulonglong)pvVar3 & 0xffffffffffffff00;
  }
  else {
    do {
      pvVar3 = (void *)0x0;
      LOCK();
      bVar2 = DAT_180010860 == (void *)0x0;
      pvVar1 = StackBase;
      if (!bVar2) {
        pvVar3 = DAT_180010860;
        pvVar1 = DAT_180010860;
      }
      DAT_180010860 = pvVar1;
      UNLOCK();
      if (bVar2) goto LAB_180005cfe;
    } while (StackBase != pvVar3);
    uVar4 = CONCAT71((int7)((ulonglong)pvVar3 >> 8),1);
  }
  return uVar4;
}



undefined8 * thunk_FUN_180003ce0(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uStack_18;
  undefined1 uStack_10;
  
  uStack_10 = 1;
  *param_1 = std::exception::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  uStack_18 = param_2;
  __std_exception_copy(&uStack_18);
  *param_1 = std::runtime_error::vftable;
  return param_1;
}



void __cdecl free(void *_Memory)

{
                    // WARNING: Could not recover jumptable at 0x0001800078a4. Too many branches
                    // WARNING: Treating indirect jump as call
  free(_Memory);
  return;
}



void * thunk_FUN_180005160(undefined8 param_1,ulonglong param_2)

{
  code *pcVar1;
  void *pvVar2;
  void *pvVar3;
  
  if (param_2 < 0x1000) {
    if (param_2 != 0) {
      pvVar2 = operator_new(param_2);
      return pvVar2;
    }
    return (void *)0x0;
  }
  if (param_2 < param_2 + 0x27) {
    pvVar2 = operator_new(param_2 + 0x27);
    if (pvVar2 != (void *)0x0) {
      pvVar3 = (void *)((longlong)pvVar2 + 0x27U & 0xffffffffffffffe0);
      *(void **)((longlong)pvVar3 + -8) = pvVar2;
      return pvVar3;
    }
                    // WARNING: Subroutine does not return
    _invalid_parameter_noinfo_noreturn();
  }
  thunk_FUN_180004ee0();
  pcVar1 = (code *)swi(3);
  pvVar2 = (void *)(*pcVar1)();
  return pvVar2;
}



void thunk_FUN_1800048f0(ulonglong *param_1,ulonglong param_2)

{
  ulonglong uVar1;
  code *pcVar2;
  void *pvVar3;
  void *pvVar4;
  
  if (0x38e38e38e38e38e < param_2) {
    thunk_FUN_180005120();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  uVar1 = param_2 * 0x48;
  if (uVar1 < 0x1000) {
    if (uVar1 == 0) {
      pvVar4 = (void *)0x0;
    }
    else {
      pvVar4 = operator_new(uVar1);
    }
  }
  else {
    if (uVar1 + 0x27 <= uVar1) {
      thunk_FUN_180004ee0();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pvVar3 = operator_new(uVar1 + 0x27);
    if (pvVar3 == (void *)0x0) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    pvVar4 = (void *)((longlong)pvVar3 + 0x27U & 0xffffffffffffffe0);
    *(void **)((longlong)pvVar4 - 8) = pvVar3;
  }
  *param_1 = (ulonglong)pvVar4;
  param_1[1] = (ulonglong)pvVar4;
  param_1[2] = (ulonglong)((longlong)pvVar4 + uVar1);
  return;
}



void thunk_FUN_180004140(longlong *param_1)

{
  void *pvVar1;
  longlong *plVar2;
  void *pvVar3;
  
  pvVar1 = (void *)param_1[0x14];
  if (pvVar1 != (void *)0x0) {
    pvVar3 = pvVar1;
    if ((0xfff < (param_1[0x16] - (longlong)pvVar1 & 0xfffffffffffffff0U)) &&
       (pvVar3 = *(void **)((longlong)pvVar1 + -8),
       0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar3)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_18000128f(pvVar3);
    param_1[0x14] = 0;
    param_1[0x15] = 0;
    param_1[0x16] = 0;
  }
  plVar2 = (longlong *)param_1[0x12];
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x20))(plVar2,plVar2 != param_1 + 0xb);
    param_1[0x12] = 0;
  }
  plVar2 = (longlong *)param_1[10];
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x20))(plVar2,plVar2 != param_1 + 3);
    param_1[10] = 0;
  }
  thunk_FUN_180004f10(param_1);
  return;
}



ulonglong * thunk_FUN_1800038c0(ulonglong *param_1,longlong *param_2)

{
  SignatureData *pSVar1;
  undefined8 *puVar2;
  code *pcVar3;
  ulonglong uVar4;
  void *pvVar5;
  ulonglong *puVar6;
  SignatureData *this;
  void *pvVar7;
  SignatureData *pSVar8;
  
  pvVar7 = (void *)0x0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar4 = (param_2[1] - *param_2) / 0x48;
  if (uVar4 != 0) {
    thunk_FUN_1800048f0(param_1,uVar4);
    this = (SignatureData *)*param_1;
    pSVar1 = (SignatureData *)param_2[1];
    for (pSVar8 = (SignatureData *)*param_2; pSVar8 != pSVar1; pSVar8 = pSVar8 + 0x48) {
      RC::SignatureData::SignatureData(this,pSVar8);
      this = this + 0x48;
    }
    param_1[1] = (ulonglong)this;
  }
  param_1[10] = 0;
  puVar2 = (undefined8 *)param_2[10];
  if (puVar2 != (undefined8 *)0x0) {
    uVar4 = (**(code **)*puVar2)(puVar2,param_1 + 3);
    param_1[10] = uVar4;
  }
  param_1[0x12] = 0;
  puVar2 = (undefined8 *)param_2[0x12];
  if (puVar2 != (undefined8 *)0x0) {
    uVar4 = (**(code **)*puVar2)(puVar2,param_1 + 0xb);
    param_1[0x12] = uVar4;
  }
  *(char *)(param_1 + 0x13) = (char)param_2[0x13];
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  uVar4 = param_2[0x15] - param_2[0x14] >> 4;
  if (uVar4 != 0) {
    if (0xfffffffffffffff < uVar4) {
LAB_180003ae5:
      thunk_FUN_180005100();
      pcVar3 = (code *)swi(3);
      puVar6 = (ulonglong *)(*pcVar3)();
      return puVar6;
    }
    uVar4 = uVar4 * 0x10;
    if (uVar4 < 0x1000) {
      if (uVar4 != 0) {
        pvVar7 = operator_new(uVar4);
      }
    }
    else {
      if (uVar4 + 0x27 <= uVar4) {
        thunk_FUN_180004ee0();
        goto LAB_180003ae5;
      }
      pvVar5 = operator_new(uVar4 + 0x27);
      if (pvVar5 == (void *)0x0) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      pvVar7 = (void *)((longlong)pvVar5 + 0x27U & 0xffffffffffffffe0);
      *(void **)((longlong)pvVar7 + -8) = pvVar5;
    }
    param_1[0x14] = (ulonglong)pvVar7;
    param_1[0x15] = (ulonglong)pvVar7;
    param_1[0x16] = (ulonglong)(uVar4 + (longlong)pvVar7);
    pvVar7 = (void *)param_1[0x14];
    uVar4 = param_2[0x15] - param_2[0x14];
    memmove(pvVar7,(void *)param_2[0x14],uVar4);
    param_1[0x15] = (uVar4 & 0xfffffffffffffff0) + (longlong)pvVar7;
  }
  *(char *)(param_1 + 0x17) = (char)param_2[0x17];
  *(undefined1 *)((longlong)param_1 + 0xb9) = *(undefined1 *)((longlong)param_2 + 0xb9);
  param_1[0x18] = param_2[0x18];
  param_1[0x19] = param_2[0x19];
  param_1[0x1a] = param_2[0x1a];
  return param_1;
}



// WARNING: Removing unreachable block (ram,0x000180003607)
// WARNING: Removing unreachable block (ram,0x00018000361e)

undefined8 * thunk_FUN_180003350(float *param_1,undefined8 *param_2,byte *param_3,longlong *param_4)

{
  int iVar1;
  ulonglong uVar2;
  undefined8 *puVar3;
  code *pcVar4;
  undefined8 *puVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  float fVar11;
  undefined8 uStack_38;
  undefined8 *puStack_30;
  
  uVar10 = (((((ulonglong)*param_3 ^ 0xcbf29ce484222325) * 0x100000001b3 ^ (ulonglong)param_3[1]) *
             0x100000001b3 ^ (ulonglong)param_3[2]) * 0x100000001b3 ^ (ulonglong)param_3[3]) *
           0x100000001b3;
  puVar5 = *(undefined8 **)
            (*(longlong *)(param_1 + 6) + 8 + (*(ulonglong *)(param_1 + 0xc) & uVar10) * 0x10);
  puVar8 = *(undefined8 **)(param_1 + 2);
  if (puVar5 != puVar8) {
    iVar1 = *(int *)(puVar5 + 2);
    puVar8 = puVar5;
    while( true ) {
      if (*(int *)param_3 == iVar1) {
        *param_2 = puVar8;
        *(undefined1 *)(param_2 + 1) = 0;
        return param_2;
      }
      if (puVar8 == *(undefined8 **)
                     (*(longlong *)(param_1 + 6) + (*(ulonglong *)(param_1 + 0xc) & uVar10) * 0x10))
      break;
      puVar8 = (undefined8 *)puVar8[1];
      iVar1 = *(int *)(puVar8 + 2);
    }
  }
  if (*(longlong *)(param_1 + 4) == 0x555555555555555) {
    std::_Xlength_error("unordered_map/set too long");
    pcVar4 = (code *)swi(3);
    puVar5 = (undefined8 *)(*pcVar4)();
    return puVar5;
  }
  thunk_FUN_1800028c0(&uStack_38,param_1 + 2,(undefined4 *)param_3,param_4);
  uVar2 = *(ulonglong *)(param_1 + 0xe);
  if (*param_1 < (float)(*(longlong *)(param_1 + 4) + 1) / (float)uVar2) {
    fVar11 = ceilf((float)(*(longlong *)(param_1 + 4) + 1) / *param_1);
    lVar6 = 0;
    if ((9.223372e+18 <= fVar11) && (fVar11 = fVar11 - 9.223372e+18, fVar11 < 9.223372e+18)) {
      lVar6 = -0x8000000000000000;
    }
    uVar7 = 8;
    if (8 < (ulonglong)((longlong)fVar11 + lVar6)) {
      uVar7 = (longlong)fVar11 + lVar6;
    }
    uVar9 = uVar2;
    if ((uVar2 < uVar7) && ((0x1ff < uVar2 || (uVar9 = uVar2 * 8, uVar2 * 8 < uVar7)))) {
      uVar9 = uVar7;
    }
    thunk_FUN_180004b90((longlong)param_1,uVar9);
    puVar5 = *(undefined8 **)
              (*(longlong *)(param_1 + 6) + 8 + (*(ulonglong *)(param_1 + 0xc) & uVar10) * 0x10);
    puVar8 = *(undefined8 **)(param_1 + 2);
    if (puVar5 != puVar8) {
      iVar1 = *(int *)(puVar5 + 2);
      puVar8 = puVar5;
      while (*(int *)(puStack_30 + 2) != iVar1) {
        if (puVar8 == *(undefined8 **)
                       (*(longlong *)(param_1 + 6) + (*(ulonglong *)(param_1 + 0xc) & uVar10) * 0x10
                       )) goto LAB_18000359d;
        puVar8 = (undefined8 *)puVar8[1];
        iVar1 = *(int *)(puVar8 + 2);
      }
      puVar8 = (undefined8 *)*puVar8;
    }
  }
LAB_18000359d:
  puVar5 = (undefined8 *)puVar8[1];
  *(longlong *)(param_1 + 4) = *(longlong *)(param_1 + 4) + 1;
  *puStack_30 = puVar8;
  puStack_30[1] = puVar5;
  *puVar5 = puStack_30;
  puVar8[1] = puStack_30;
  lVar6 = *(longlong *)(param_1 + 6);
  uVar10 = *(ulonglong *)(param_1 + 0xc) & uVar10;
  puVar3 = *(undefined8 **)(lVar6 + uVar10 * 0x10);
  if (puVar3 == *(undefined8 **)(param_1 + 2)) {
    *(undefined8 **)(lVar6 + uVar10 * 0x10) = puStack_30;
  }
  else {
    if (puVar3 == puVar8) {
      *(undefined8 **)(lVar6 + uVar10 * 0x10) = puStack_30;
      goto LAB_1800035f1;
    }
    if (*(undefined8 **)(lVar6 + 8 + uVar10 * 0x10) != puVar5) goto LAB_1800035f1;
  }
  *(undefined8 **)(lVar6 + 8 + uVar10 * 0x10) = puStack_30;
LAB_1800035f1:
  *param_2 = puStack_30;
  *(undefined1 *)(param_2 + 1) = 1;
  return param_2;
}



void * thunk_FUN_180004de0(void *param_1)

{
  code *pcVar1;
  void *pvVar2;
  longlong lVar3;
  size_t _Count;
  longlong lVar4;
  
  lVar3 = -1;
  do {
    lVar4 = lVar3;
    lVar3 = lVar4 + 1;
  } while (*(short *)((longlong)param_1 + lVar3 * 2) != 0);
  _Count = lVar4 + 2;
  pvVar2 = calloc(_Count,2);
  if (pvVar2 != (void *)0x0) {
    memcpy(pvVar2,param_1,_Count * 2);
    return pvVar2;
  }
  std::_Xbad_alloc();
  pcVar1 = (code *)swi(3);
  pvVar2 = (void *)(*pcVar1)();
  return pvVar2;
}



void thunk_FUN_180004f10(longlong *param_1)

{
  SignatureData *pSVar1;
  void *pvVar2;
  SignatureData *this;
  void *pvVar3;
  
  this = (SignatureData *)*param_1;
  if (this != (SignatureData *)0x0) {
    pSVar1 = (SignatureData *)param_1[1];
    for (; this != pSVar1; this = this + 0x48) {
      RC::SignatureData::~SignatureData(this);
    }
    pvVar2 = (void *)*param_1;
    pvVar3 = pvVar2;
    if ((0xfff < (ulonglong)(((param_1[2] - (longlong)pvVar2) / 0x48) * 0x48)) &&
       (pvVar3 = *(void **)((longlong)pvVar2 + -8),
       0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)pvVar3)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_18000128f(pvVar3);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}



longlong * thunk_FUN_1800052f0(longlong *param_1,void *param_2,ulonglong param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  void *pvVar3;
  code *pcVar4;
  void *_Dst;
  longlong *plVar5;
  ulonglong uVar6;
  void *pvVar7;
  ulonglong uVar8;
  
  uVar2 = param_1[3];
  if (uVar2 < param_3) {
    if (0x7ffffffffffffffe < param_3) {
      thunk_FUN_1800050e0();
      pcVar4 = (code *)swi(3);
      plVar5 = (longlong *)(*pcVar4)();
      return plVar5;
    }
    uVar6 = param_3 | 7;
    uVar8 = 0x7ffffffffffffffe;
    if (((uVar6 < 0x7fffffffffffffff) && (uVar2 <= 0x7ffffffffffffffe - (uVar2 >> 1))) &&
       (uVar1 = (uVar2 >> 1) + uVar2, uVar8 = uVar6, uVar6 < uVar1)) {
      uVar8 = uVar1;
    }
    _Dst = thunk_FUN_180005260(param_1,uVar8 + 1);
    param_1[3] = uVar8;
    param_1[2] = param_3;
    memcpy(_Dst,param_2,param_3 * 2);
    *(undefined2 *)(param_3 * 2 + (longlong)_Dst) = 0;
    if (7 < uVar2) {
      pvVar3 = (void *)*param_1;
      pvVar7 = pvVar3;
      if ((0xfff < uVar2 * 2 + 2) &&
         (pvVar7 = *(void **)((longlong)pvVar3 + -8),
         0x1f < (ulonglong)((longlong)pvVar3 + (-8 - (longlong)pvVar7)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_18000128f(pvVar7);
    }
    *param_1 = (longlong)_Dst;
  }
  else {
    plVar5 = param_1;
    if (7 < uVar2) {
      plVar5 = (longlong *)*param_1;
    }
    param_1[2] = param_3;
    memmove(plVar5,param_2,param_3 * 2);
    *(undefined2 *)(param_3 * 2 + (longlong)plVar5) = 0;
  }
  return param_1;
}



undefined8 * thunk_FUN_1800046a0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = std::exception::vftable;
  __std_exception_destroy(param_1 + 1);
  if ((param_2 & 1) != 0) {
    FUN_18000128f(param_1);
  }
  return param_1;
}



// WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall

void __scrt_dllmain_exception_filter
               (undefined8 param_1,int param_2,undefined8 param_3,undefined *param_4,
               undefined4 param_5,undefined8 param_6)

{
  bool bVar1;
  undefined7 extraout_var;
  
  bVar1 = __scrt_is_ucrt_dll_in_use();
  if (((int)CONCAT71(extraout_var,bVar1) == 0) && (param_2 == 1)) {
    (*(code *)param_4)(param_1,0,param_3);
  }
  _seh_filter_dll(param_5,param_6);
  return;
}



void thunk_FUN_180004760(longlong *param_1,ulonglong param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  code *pcVar3;
  void *pvVar4;
  longlong lVar5;
  void *pvVar6;
  undefined8 *puVar7;
  undefined8 uStackX_18;
  
  uStackX_18 = param_3;
  if (param_2 <= (ulonglong)(param_1[1] - *param_1 >> 3)) {
    thunk_FUN_180003700((undefined8 *)*param_1,(undefined8 *)param_1[1],&uStackX_18);
    return;
  }
  if (0x1fffffffffffffff < param_2) {
FUN_180004895:
    thunk_FUN_180004ee0();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  uVar2 = param_2 * 8;
  if (uVar2 < 0x1000) {
    if (uVar2 == 0) {
      puVar7 = (undefined8 *)0x0;
    }
    else {
      puVar7 = (undefined8 *)operator_new(uVar2);
    }
  }
  else {
    if (uVar2 + 0x27 <= uVar2) goto FUN_180004895;
    pvVar4 = operator_new(uVar2 + 0x27);
    if (pvVar4 == (void *)0x0)
    goto API_MS_WIN_CRT_RUNTIME_L1_1_0_DLL__invalid_parameter_noinfo_noreturn;
    puVar7 = (undefined8 *)((longlong)pvVar4 + 0x27U & 0xffffffffffffffe0);
    puVar7[-1] = pvVar4;
  }
  pvVar4 = (void *)*param_1;
  lVar5 = param_1[2] - (longlong)pvVar4 >> 3;
  if (lVar5 != 0) {
    pvVar6 = pvVar4;
    if ((0xfff < (ulonglong)(lVar5 * 8)) &&
       (pvVar6 = *(void **)((longlong)pvVar4 + -8),
       0x1f < (ulonglong)((longlong)pvVar4 + (-8 - (longlong)pvVar6)))) {
API_MS_WIN_CRT_RUNTIME_L1_1_0_DLL__invalid_parameter_noinfo_noreturn:
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_18000128f(pvVar6);
  }
  puVar1 = puVar7 + param_2;
  *param_1 = (longlong)puVar7;
  param_1[1] = (longlong)puVar1;
  param_1[2] = (longlong)puVar1;
  for (; puVar7 != puVar1; puVar7 = puVar7 + 1) {
    *puVar7 = param_3;
  }
  return;
}



longlong __scrt_initialize_crt(int param_1)

{
  char cVar1;
  uint7 extraout_var;
  uint7 uVar2;
  undefined7 extraout_var_00;
  uint7 extraout_var_01;
  
  if (param_1 == 0) {
    DAT_180010868 = 1;
  }
  thunk_FUN_180006b48();
  cVar1 = thunk_FUN_1800078ac();
  uVar2 = extraout_var;
  if (cVar1 != '\0') {
    cVar1 = thunk_FUN_1800078ac();
    if (cVar1 != '\0') {
      return CONCAT71(extraout_var_00,1);
    }
    thunk_FUN_1800078b8();
    uVar2 = extraout_var_01;
  }
  return (ulonglong)uVar2 << 8;
}



// WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall

void __cdecl
__ArrayUnwind(void *param_1,__uint64 param_2,__uint64 param_3,_func_void_void_ptr *param_4)

{
  __uint64 _Var1;
  
  for (_Var1 = 0; _Var1 != param_3; _Var1 = _Var1 + 1) {
    param_1 = (void *)((longlong)param_1 - param_2);
    (*param_4)(param_1);
  }
  return;
}



void thunk_FUN_180006b18(void)

{
  undefined8 auStack_28 [5];
  
  thunk_FUN_180003c20(auStack_28);
                    // WARNING: Subroutine does not return
  _CxxThrowException(auStack_28,(ThrowInfo *)&DAT_18000f2f8);
}



undefined1 thunk_FUN_180005dac(void)

{
  thunk_FUN_1800078b4();
  thunk_FUN_1800078b4();
  return 1;
}



void __scrt_dllmain_uninitialize_c(void)

{
  bool bVar1;
  undefined7 extraout_var;
  undefined8 uVar2;
  
  bVar1 = __scrt_is_ucrt_dll_in_use();
  if ((int)CONCAT71(extraout_var,bVar1) != 0) {
    _execute_onexit_table(&DAT_180010870);
    return;
  }
  uVar2 = thunk_FUN_1800078c0();
  if ((int)uVar2 == 0) {
    _cexit();
  }
  return;
}



void thunk_FUN_180004060(longlong *param_1)

{
  FUN_180004060(param_1);
  return;
}



undefined8 * thunk_FUN_180006a94(undefined8 *param_1)

{
  param_1[2] = 0;
  param_1[1] = "bad allocation";
  *param_1 = std::bad_alloc::vftable;
  return param_1;
}



undefined8 *
FUN_1800028c0(undefined8 *param_1,undefined8 param_2,undefined4 *param_3,longlong *param_4)

{
  longlong *plVar1;
  code *pcVar2;
  void *pvVar3;
  void *pvVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  longlong *plVar7;
  void *pvVar8;
  ulonglong *puVar9;
  
  *param_1 = param_2;
  pvVar8 = (void *)0x0;
  param_1[1] = 0;
  pvVar3 = operator_new(0x30);
  param_1[1] = pvVar3;
  *(undefined4 *)((longlong)pvVar3 + 0x10) = *param_3;
  puVar5 = (undefined8 *)((longlong)pvVar3 + 0x18);
  *puVar5 = 0;
  *(undefined8 *)((longlong)pvVar3 + 0x20) = 0;
  *(undefined8 *)((longlong)pvVar3 + 0x28) = 0;
  uVar6 = (param_4[1] - *param_4) / 0xd8;
  if (uVar6 != 0) {
    if (0x12f684bda12f684 < uVar6) {
LAB_180002a04:
      thunk_FUN_180005140();
      pcVar2 = (code *)swi(3);
      puVar5 = (undefined8 *)(*pcVar2)();
      return puVar5;
    }
    uVar6 = uVar6 * 0xd8;
    if (uVar6 < 0x1000) {
      if (uVar6 != 0) {
        pvVar8 = operator_new(uVar6);
      }
    }
    else {
      if (uVar6 + 0x27 <= uVar6) {
        thunk_FUN_180004ee0();
        goto LAB_180002a04;
      }
      pvVar4 = operator_new(uVar6 + 0x27);
      if (pvVar4 == (void *)0x0) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      pvVar8 = (void *)((longlong)pvVar4 + 0x27U & 0xffffffffffffffe0);
      *(void **)((longlong)pvVar8 + -8) = pvVar4;
    }
    *puVar5 = pvVar8;
    *(void **)((longlong)pvVar3 + 0x20) = pvVar8;
    *(void **)((longlong)pvVar3 + 0x28) = (void *)(uVar6 + (longlong)pvVar8);
    puVar9 = (ulonglong *)*puVar5;
    plVar1 = (longlong *)param_4[1];
    for (plVar7 = (longlong *)*param_4; plVar7 != plVar1; plVar7 = plVar7 + 0x1b) {
      thunk_FUN_1800038c0(puVar9,plVar7);
      puVar9 = puVar9 + 0x1b;
    }
    *(ulonglong **)((longlong)pvVar3 + 0x20) = puVar9;
  }
  return param_1;
}



// Library Function - Single Match
//  void * __ptr64 __cdecl std::_Allocate_manually_vector_aligned<struct
// std::_Default_allocate_traits>(unsigned __int64)
// 
// Library: Visual Studio 2019 Release

void * __cdecl std::_Allocate_manually_vector_aligned<>(__uint64 param_1)

{
  code *pcVar1;
  void *pvVar2;
  void *pvVar3;
  
  if (param_1 + 0x27 <= param_1) {
    thunk_FUN_180004ee0();
    pcVar1 = (code *)swi(3);
    pvVar2 = (void *)(*pcVar1)();
    return pvVar2;
  }
  pvVar2 = operator_new(param_1 + 0x27);
  if (pvVar2 != (void *)0x0) {
    pvVar3 = (void *)((longlong)pvVar2 + 0x27U & 0xffffffffffffffe0);
    *(void **)((longlong)pvVar3 + -8) = pvVar2;
    return pvVar3;
  }
                    // WARNING: Subroutine does not return
  _invalid_parameter_noinfo_noreturn();
}



longlong FUN_180002ab0(void *param_1,longlong param_2,void *param_3)

{
  memmove(param_3,param_1,param_2 - (longlong)param_1);
  return (param_2 - (longlong)param_1) + (longlong)param_3;
}



void FUN_180002af0(longlong *param_1,longlong *param_2)

{
  if (param_1 != param_2) {
    do {
      thunk_FUN_180004140(param_1);
      param_1 = param_1 + 0x1b;
    } while (param_1 != param_2);
  }
  return;
}



ulonglong * FUN_180002b40(longlong *param_1,longlong *param_2,longlong *param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong *plVar3;
  void *pvVar4;
  code *pcVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong *puVar8;
  longlong lVar9;
  longlong *plVar10;
  void *pvVar11;
  ulonglong *puVar12;
  ulonglong uVar13;
  
  lVar2 = *param_1;
  lVar9 = ((longlong)param_2 - lVar2) / 0x36 + ((longlong)param_2 - lVar2 >> 0x3f);
  lVar6 = (param_1[1] - lVar2) / 0xd8;
  if (lVar6 == 0x12f684bda12f684) {
    thunk_FUN_180005140();
    pcVar5 = (code *)swi(3);
    puVar8 = (ulonglong *)(*pcVar5)();
    return puVar8;
  }
  uVar1 = lVar6 + 1;
  uVar7 = (param_1[2] - lVar2) / 0xd8;
  uVar13 = 0x12f684bda12f684;
  if ((uVar7 <= 0x12f684bda12f684 - (uVar7 >> 1)) && (uVar13 = (uVar7 >> 1) + uVar7, uVar13 < uVar1)
     ) {
    uVar13 = uVar1;
  }
  puVar8 = (ulonglong *)thunk_FUN_1800051d0(param_1,uVar13);
  puVar12 = puVar8 + ((lVar9 >> 2) - (lVar9 >> 0x3f)) * 0x1b;
  thunk_FUN_1800038c0(puVar12,param_3);
  if (param_2 == (longlong *)param_1[1]) {
    thunk_FUN_180003110((longlong *)*param_1,(longlong *)param_1[1],puVar8);
  }
  else {
    thunk_FUN_180003190((longlong *)*param_1,param_2,puVar8);
    thunk_FUN_180003190(param_2,(undefined8 *)param_1[1],puVar12 + 0x1b);
  }
  plVar10 = (longlong *)*param_1;
  if (plVar10 != (longlong *)0x0) {
    plVar3 = (longlong *)param_1[1];
    for (; plVar10 != plVar3; plVar10 = plVar10 + 0x1b) {
      thunk_FUN_180004140(plVar10);
    }
    pvVar4 = (void *)*param_1;
    pvVar11 = pvVar4;
    if ((0xfff < (ulonglong)(((param_1[2] - (longlong)pvVar4) / 0xd8) * 0xd8)) &&
       (pvVar11 = *(void **)((longlong)pvVar4 + -8),
       0x1f < (ulonglong)((longlong)pvVar4 + (-8 - (longlong)pvVar11)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_18000128f(pvVar11);
  }
  *param_1 = (longlong)puVar8;
  param_1[1] = (longlong)(puVar8 + uVar1 * 0x1b);
  param_1[2] = (longlong)(puVar8 + uVar13 * 0x1b);
  return puVar12;
}



// Library Function - Single Match
//  unsigned __int64 __cdecl std::_Fnv1a_append_value<unsigned long>(unsigned __int64,unsigned long
// const & __ptr64)
// 
// Library: Visual Studio 2019 Release

__uint64 __cdecl std::_Fnv1a_append_value<>(__uint64 param_1,ulong *param_2)

{
  return ((((ulonglong)*(byte *)((longlong)param_2 + 1) ^ ((byte)*param_2 ^ param_1) * 0x100000001b3
           ) * 0x100000001b3 ^ (ulonglong)*(byte *)((longlong)param_2 + 2)) * 0x100000001b3 ^
         (ulonglong)*(byte *)((longlong)param_2 + 3)) * 0x100000001b3;
}



void FUN_180002e00(longlong param_1,undefined8 param_2,_Cvtvec *param_3)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  _Cvtvec *p_Var6;
  wchar_t *pwVar7;
  void *pvVar8;
  undefined8 *puVar9;
  undefined1 auStack_68 [80];
  ulonglong local_18;
  
  local_18 = DAT_180010028 ^ (ulonglong)auStack_68;
  p_Var6 = std::_Locinfo::_Getcvt(param_3);
  uVar5 = *(undefined8 *)&p_Var6->_Isclocale;
  *(undefined8 *)(param_1 + 0x2c) = *(undefined8 *)p_Var6;
  *(undefined8 *)(param_1 + 0x34) = uVar5;
  uVar2 = *(undefined4 *)(p_Var6->_Isleadbyte + 8);
  uVar3 = *(undefined4 *)(p_Var6->_Isleadbyte + 0xc);
  uVar4 = *(undefined4 *)(p_Var6->_Isleadbyte + 0x10);
  *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(p_Var6->_Isleadbyte + 4);
  *(undefined4 *)(param_1 + 0x40) = uVar2;
  *(undefined4 *)(param_1 + 0x44) = uVar3;
  *(undefined4 *)(param_1 + 0x48) = uVar4;
  *(undefined8 *)(param_1 + 0x4c) = *(undefined8 *)(p_Var6->_Isleadbyte + 0x14);
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(p_Var6->_Isleadbyte + 0x1c);
  pwVar7 = std::_Locinfo::_W_Getdays();
  pvVar8 = thunk_FUN_180004de0(pwVar7);
  *(void **)(param_1 + 0x10) = pvVar8;
  pwVar7 = std::_Locinfo::_W_Getmonths();
  pvVar8 = thunk_FUN_180004de0(pwVar7);
  *(void **)(param_1 + 0x18) = pvVar8;
  puVar9 = (undefined8 *)calloc(0xd,2);
  if (puVar9 != (undefined8 *)0x0) {
    *puVar9 = 0x3a004d0041003a;
    puVar9[1] = 0x50003a006d0061;
    puVar9[2] = 0x6d0070003a004d;
    *(undefined2 *)(puVar9 + 3) = 0;
    *(undefined8 **)(param_1 + 0x20) = puVar9;
    thunk_FUN_1800062a0(local_18 ^ (ulonglong)auStack_68);
    return;
  }
  std::_Xbad_alloc();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



void FUN_180002f10(longlong param_1,undefined8 param_2,_Cvtvec *param_3)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  _Cvtvec *p_Var6;
  wchar_t *pwVar7;
  void *pvVar8;
  undefined8 *puVar9;
  undefined1 auStack_68 [80];
  ulonglong local_18;
  
  local_18 = DAT_180010028 ^ (ulonglong)auStack_68;
  p_Var6 = std::_Locinfo::_Getcvt(param_3);
  uVar5 = *(undefined8 *)&p_Var6->_Isclocale;
  *(undefined8 *)(param_1 + 0x2c) = *(undefined8 *)p_Var6;
  *(undefined8 *)(param_1 + 0x34) = uVar5;
  uVar2 = *(undefined4 *)(p_Var6->_Isleadbyte + 8);
  uVar3 = *(undefined4 *)(p_Var6->_Isleadbyte + 0xc);
  uVar4 = *(undefined4 *)(p_Var6->_Isleadbyte + 0x10);
  *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(p_Var6->_Isleadbyte + 4);
  *(undefined4 *)(param_1 + 0x40) = uVar2;
  *(undefined4 *)(param_1 + 0x44) = uVar3;
  *(undefined4 *)(param_1 + 0x48) = uVar4;
  *(undefined8 *)(param_1 + 0x4c) = *(undefined8 *)(p_Var6->_Isleadbyte + 0x14);
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(p_Var6->_Isleadbyte + 0x1c);
  pwVar7 = std::_Locinfo::_W_Getdays();
  pvVar8 = thunk_FUN_180004de0(pwVar7);
  *(void **)(param_1 + 0x10) = pvVar8;
  pwVar7 = std::_Locinfo::_W_Getmonths();
  pvVar8 = thunk_FUN_180004de0(pwVar7);
  *(void **)(param_1 + 0x18) = pvVar8;
  puVar9 = (undefined8 *)calloc(0xd,2);
  if (puVar9 != (undefined8 *)0x0) {
    *puVar9 = 0x3a004d0041003a;
    puVar9[1] = 0x50003a006d0061;
    puVar9[2] = 0x6d0070003a004d;
    *(undefined2 *)(puVar9 + 3) = 0;
    *(undefined8 **)(param_1 + 0x20) = puVar9;
    thunk_FUN_1800062a0(local_18 ^ (ulonglong)auStack_68);
    return;
  }
  std::_Xbad_alloc();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



longlong FUN_180003020(byte *param_1)

{
  return ((((ulonglong)param_1[1] ^ ((ulonglong)*param_1 ^ 0xcbf29ce484222325) * 0x100000001b3) *
           0x100000001b3 ^ (ulonglong)param_1[2]) * 0x100000001b3 ^ (ulonglong)param_1[3]) *
         0x100000001b3;
}



void * FUN_180003080(void *param_1)

{
  size_t _Count;
  code *pcVar1;
  longlong lVar2;
  longlong lVar3;
  void *pvVar4;
  
  lVar2 = -1;
  do {
    lVar3 = lVar2;
    lVar2 = lVar3 + 1;
  } while (*(char *)((longlong)param_1 + lVar3 + 1) != '\0');
  _Count = lVar3 + 2;
  pvVar4 = calloc(_Count,1);
  if (pvVar4 != (void *)0x0) {
    if (_Count != 0) {
      memcpy(pvVar4,param_1,_Count);
    }
    return pvVar4;
  }
  std::_Xbad_alloc();
  pcVar1 = (code *)swi(3);
  pvVar4 = (void *)(*pcVar1)();
  return pvVar4;
}



ulonglong * FUN_180003110(longlong *param_1,longlong *param_2,ulonglong *param_3)

{
  if (param_1 != param_2) {
    do {
      thunk_FUN_1800038c0(param_3,param_1);
      param_3 = param_3 + 0x1b;
      param_1 = param_1 + 0x1b;
    } while (param_1 != param_2);
  }
  return param_3;
}



undefined8 * FUN_180003190(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  if (param_1 != param_2) {
    puVar5 = param_1 + 0x15;
    do {
      uVar4 = puVar5[-0x13];
      puVar5[-0x13] = 0;
      uVar1 = puVar5[-0x14];
      puVar5[-0x14] = 0;
      uVar2 = puVar5[-0x15];
      puVar5[-0x15] = 0;
      *param_3 = uVar2;
      param_3[1] = uVar1;
      param_3[2] = uVar4;
      param_3[10] = 0;
      puVar3 = (undefined8 *)puVar5[-0xb];
      if (puVar3 != (undefined8 *)0x0) {
        uVar4 = (**(code **)*puVar3)(puVar3,param_3 + 3);
        param_3[10] = uVar4;
      }
      param_3[0x12] = 0;
      puVar3 = (undefined8 *)puVar5[-3];
      if (puVar3 != (undefined8 *)0x0) {
        uVar4 = (**(code **)*puVar3)(puVar3,param_3 + 0xb);
        param_3[0x12] = uVar4;
      }
      *(undefined1 *)(param_3 + 0x13) = *(undefined1 *)(puVar5 + -2);
      uVar4 = puVar5[1];
      puVar5[1] = 0;
      uVar1 = *puVar5;
      *puVar5 = 0;
      uVar2 = puVar5[-1];
      puVar5[-1] = 0;
      param_3[0x14] = uVar2;
      param_3[0x15] = uVar1;
      param_3[0x16] = uVar4;
      *(undefined1 *)(param_3 + 0x17) = *(undefined1 *)(puVar5 + 2);
      *(undefined1 *)((longlong)param_3 + 0xb9) = *(undefined1 *)((longlong)puVar5 + 0x11);
      param_3[0x18] = puVar5[3];
      param_3[0x19] = puVar5[4];
      param_3[0x1a] = puVar5[5];
      param_3 = param_3 + 0x1b;
      puVar3 = puVar5 + 6;
      puVar5 = puVar5 + 0x1b;
    } while (puVar3 != param_2);
  }
  return param_3;
}



// WARNING: Removing unreachable block (ram,0x000180003607)
// WARNING: Removing unreachable block (ram,0x00018000361e)

undefined8 * FUN_180003350(float *param_1,undefined8 *param_2,byte *param_3,longlong *param_4)

{
  int iVar1;
  ulonglong uVar2;
  undefined8 *puVar3;
  code *pcVar4;
  undefined8 *puVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  float fVar11;
  undefined8 local_38;
  undefined8 *local_30;
  
  uVar10 = (((((ulonglong)*param_3 ^ 0xcbf29ce484222325) * 0x100000001b3 ^ (ulonglong)param_3[1]) *
             0x100000001b3 ^ (ulonglong)param_3[2]) * 0x100000001b3 ^ (ulonglong)param_3[3]) *
           0x100000001b3;
  puVar5 = *(undefined8 **)
            (*(longlong *)(param_1 + 6) + 8 + (*(ulonglong *)(param_1 + 0xc) & uVar10) * 0x10);
  puVar8 = *(undefined8 **)(param_1 + 2);
  if (puVar5 != puVar8) {
    iVar1 = *(int *)(puVar5 + 2);
    puVar8 = puVar5;
    while( true ) {
      if (*(int *)param_3 == iVar1) {
        *param_2 = puVar8;
        *(undefined1 *)(param_2 + 1) = 0;
        return param_2;
      }
      if (puVar8 == *(undefined8 **)
                     (*(longlong *)(param_1 + 6) + (*(ulonglong *)(param_1 + 0xc) & uVar10) * 0x10))
      break;
      puVar8 = (undefined8 *)puVar8[1];
      iVar1 = *(int *)(puVar8 + 2);
    }
  }
  if (*(longlong *)(param_1 + 4) == 0x555555555555555) {
    std::_Xlength_error("unordered_map/set too long");
    pcVar4 = (code *)swi(3);
    puVar5 = (undefined8 *)(*pcVar4)();
    return puVar5;
  }
  thunk_FUN_1800028c0(&local_38,param_1 + 2,(undefined4 *)param_3,param_4);
  uVar2 = *(ulonglong *)(param_1 + 0xe);
  if (*param_1 < (float)(*(longlong *)(param_1 + 4) + 1) / (float)uVar2) {
    fVar11 = ceilf((float)(*(longlong *)(param_1 + 4) + 1) / *param_1);
    lVar6 = 0;
    if ((9.223372e+18 <= fVar11) && (fVar11 = fVar11 - 9.223372e+18, fVar11 < 9.223372e+18)) {
      lVar6 = -0x8000000000000000;
    }
    uVar7 = 8;
    if (8 < (ulonglong)((longlong)fVar11 + lVar6)) {
      uVar7 = (longlong)fVar11 + lVar6;
    }
    uVar9 = uVar2;
    if ((uVar2 < uVar7) && ((0x1ff < uVar2 || (uVar9 = uVar2 * 8, uVar2 * 8 < uVar7)))) {
      uVar9 = uVar7;
    }
    thunk_FUN_180004b90((longlong)param_1,uVar9);
    puVar5 = *(undefined8 **)
              (*(longlong *)(param_1 + 6) + 8 + (*(ulonglong *)(param_1 + 0xc) & uVar10) * 0x10);
    puVar8 = *(undefined8 **)(param_1 + 2);
    if (puVar5 != puVar8) {
      iVar1 = *(int *)(puVar5 + 2);
      puVar8 = puVar5;
      while (*(int *)(local_30 + 2) != iVar1) {
        if (puVar8 == *(undefined8 **)
                       (*(longlong *)(param_1 + 6) + (*(ulonglong *)(param_1 + 0xc) & uVar10) * 0x10
                       )) goto LAB_18000359d;
        puVar8 = (undefined8 *)puVar8[1];
        iVar1 = *(int *)(puVar8 + 2);
      }
      puVar8 = (undefined8 *)*puVar8;
    }
  }
LAB_18000359d:
  puVar5 = (undefined8 *)puVar8[1];
  *(longlong *)(param_1 + 4) = *(longlong *)(param_1 + 4) + 1;
  *local_30 = puVar8;
  local_30[1] = puVar5;
  *puVar5 = local_30;
  puVar8[1] = local_30;
  lVar6 = *(longlong *)(param_1 + 6);
  uVar10 = *(ulonglong *)(param_1 + 0xc) & uVar10;
  puVar3 = *(undefined8 **)(lVar6 + uVar10 * 0x10);
  if (puVar3 == *(undefined8 **)(param_1 + 2)) {
    *(undefined8 **)(lVar6 + uVar10 * 0x10) = local_30;
  }
  else {
    if (puVar3 == puVar8) {
      *(undefined8 **)(lVar6 + uVar10 * 0x10) = local_30;
      goto LAB_1800035f1;
    }
    if (*(undefined8 **)(lVar6 + 8 + uVar10 * 0x10) != puVar5) goto LAB_1800035f1;
  }
  *(undefined8 **)(lVar6 + 8 + uVar10 * 0x10) = local_30;
LAB_1800035f1:
  *param_2 = local_30;
  *(undefined1 *)(param_2 + 1) = 1;
  return param_2;
}



void FUN_180003700(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  
  uVar3 = (ulonglong)((longlong)param_2 + (7 - (longlong)param_1)) >> 3;
  if (param_2 < param_1) {
    uVar3 = 0;
  }
  if ((uVar3 != 0) && (1 < uVar3)) {
    uVar1 = *param_3;
    if ((param_3 < param_1) || (param_1 + (uVar3 - 1) < param_3)) {
      puVar4 = param_1;
      for (uVar2 = uVar3 & 0x1ffffffffffffffe; uVar2 != 0; uVar2 = uVar2 - 1) {
        *puVar4 = uVar1;
        puVar4 = puVar4 + 1;
      }
      param_1 = param_1 + (uVar3 & 0xfffffffffffffffe);
    }
  }
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    *param_1 = *param_3;
  }
  return;
}



void FUN_18000373e(undefined8 param_1,ulonglong param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 in_RAX;
  ulonglong uVar1;
  undefined8 *puVar2;
  undefined8 *in_R10;
  
  puVar2 = param_4;
  for (uVar1 = param_2 & 0x1ffffffffffffffe; uVar1 != 0; uVar1 = uVar1 - 1) {
    *puVar2 = in_RAX;
    puVar2 = puVar2 + 1;
  }
  for (puVar2 = param_4 + (param_2 & 0xfffffffffffffffe); puVar2 != in_R10; puVar2 = puVar2 + 1) {
    *puVar2 = *param_3;
  }
  return;
}



void FUN_180003762(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 *in_R10;
  
  if (param_4 != in_R10) {
    do {
      *param_4 = *param_3;
      param_4 = param_4 + 1;
    } while (param_4 != in_R10);
  }
  return;
}



void FUN_1800037b0(undefined4 *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  vector<> *pvVar4;
  longlong *plVar5;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  pvVar4 = RC::Output::DefaultTargets::get_default_devices_ref();
  plVar5 = *(longlong **)pvVar4;
  plVar1 = *(longlong **)(pvVar4 + 8);
  while( true ) {
    if (plVar5 == plVar1) {
      return;
    }
    pvVar4 = RC::Output::DefaultTargets::get_default_devices_ref();
    if ((*(longlong *)pvVar4 == *(longlong *)(pvVar4 + 8)) ||
       ((longlong *)*plVar5 == (longlong *)0x0)) break;
    cVar3 = (**(code **)(*(longlong *)*plVar5 + 8))();
    plVar2 = (longlong *)*plVar5;
    local_28 = *param_1;
    uStack_24 = param_1[1];
    uStack_20 = param_1[2];
    uStack_1c = param_1[3];
    if (cVar3 == '\0') {
      (**(code **)(*plVar2 + 0x10))(plVar2,&local_28);
    }
    else {
      (**(code **)(*plVar2 + 0x18))(plVar2,&local_28,3);
    }
    plVar5 = plVar5 + 1;
  }
  DAT_180010850 = 1;
  thunk_FUN_180003ce0((undefined8 *)&local_28,
                      "[Output::send] Attempted to send but there were no default devices. Please specify at least one default device or construct a Targets object and supply your own devices."
                     );
                    // WARNING: Subroutine does not return
  _CxxThrowException(&local_28,(ThrowInfo *)&DAT_18000f3d8);
}



void FUN_180003890(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  if (param_1 != param_2) {
    do {
      *param_1 = *param_3;
      param_1 = param_1 + 1;
    } while (param_1 != param_2);
  }
  return;
}



ulonglong * FUN_1800038c0(ulonglong *param_1,longlong *param_2)

{
  SignatureData *pSVar1;
  undefined8 *puVar2;
  code *pcVar3;
  ulonglong uVar4;
  void *pvVar5;
  ulonglong *puVar6;
  SignatureData *this;
  void *pvVar7;
  SignatureData *pSVar8;
  
  pvVar7 = (void *)0x0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar4 = (param_2[1] - *param_2) / 0x48;
  if (uVar4 != 0) {
    thunk_FUN_1800048f0(param_1,uVar4);
    this = (SignatureData *)*param_1;
    pSVar1 = (SignatureData *)param_2[1];
    for (pSVar8 = (SignatureData *)*param_2; pSVar8 != pSVar1; pSVar8 = pSVar8 + 0x48) {
      RC::SignatureData::SignatureData(this,pSVar8);
      this = this + 0x48;
    }
    param_1[1] = (ulonglong)this;
  }
  param_1[10] = 0;
  puVar2 = (undefined8 *)param_2[10];
  if (puVar2 != (undefined8 *)0x0) {
    uVar4 = (**(code **)*puVar2)(puVar2,param_1 + 3);
    param_1[10] = uVar4;
  }
  param_1[0x12] = 0;
  puVar2 = (undefined8 *)param_2[0x12];
  if (puVar2 != (undefined8 *)0x0) {
    uVar4 = (**(code **)*puVar2)(puVar2,param_1 + 0xb);
    param_1[0x12] = uVar4;
  }
  *(char *)(param_1 + 0x13) = (char)param_2[0x13];
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  uVar4 = param_2[0x15] - param_2[0x14] >> 4;
  if (uVar4 != 0) {
    if (0xfffffffffffffff < uVar4) {
LAB_180003ae5:
      thunk_FUN_180005100();
      pcVar3 = (code *)swi(3);
      puVar6 = (ulonglong *)(*pcVar3)();
      return puVar6;
    }
    uVar4 = uVar4 * 0x10;
    if (uVar4 < 0x1000) {
      if (uVar4 != 0) {
        pvVar7 = operator_new(uVar4);
      }
    }
    else {
      if (uVar4 + 0x27 <= uVar4) {
        thunk_FUN_180004ee0();
        goto LAB_180003ae5;
      }
      pvVar5 = operator_new(uVar4 + 0x27);
      if (pvVar5 == (void *)0x0) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      pvVar7 = (void *)((longlong)pvVar5 + 0x27U & 0xffffffffffffffe0);
      *(void **)((longlong)pvVar7 + -8) = pvVar5;
    }
    param_1[0x14] = (ulonglong)pvVar7;
    param_1[0x15] = (ulonglong)pvVar7;
    param_1[0x16] = (ulonglong)(uVar4 + (longlong)pvVar7);
    pvVar7 = (void *)param_1[0x14];
    uVar4 = param_2[0x15] - param_2[0x14];
    memmove(pvVar7,(void *)param_2[0x14],uVar4);
    param_1[0x15] = (uVar4 & 0xfffffffffffffff0) + (longlong)pvVar7;
  }
  *(char *)(param_1 + 0x17) = (char)param_2[0x17];
  *(undefined1 *)((longlong)param_1 + 0xb9) = *(undefined1 *)((longlong)param_2 + 0xb9);
  param_1[0x18] = param_2[0x18];
  param_1[0x19] = param_2[0x19];
  param_1[0x1a] = param_2[0x1a];
  return param_1;
}



undefined8 * FUN_180003b80(undefined8 *param_1,longlong param_2)

{
  *param_1 = std::exception::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  __std_exception_copy(param_2 + 8);
  *param_1 = std::bad_alloc::vftable;
  return param_1;
}



undefined8 * FUN_180003bd0(undefined8 *param_1,longlong param_2)

{
  *param_1 = std::exception::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  __std_exception_copy(param_2 + 8);
  *param_1 = std::bad_array_new_length::vftable;
  return param_1;
}



undefined8 * FUN_180003c20(undefined8 *param_1)

{
  param_1[2] = 0;
  param_1[1] = "bad array new length";
  *param_1 = std::bad_array_new_length::vftable;
  return param_1;
}



// Library Function - Single Match
//  public: __cdecl std::exception::exception(class std::exception const & __ptr64) __ptr64
// 
// Library: Visual Studio 2019 Release

exception * __thiscall std::exception::exception(exception *this,exception *param_1)

{
  *(undefined ***)this = vftable;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  __std_exception_copy(param_1 + 8);
  return this;
}



undefined8 * FUN_180003c90(undefined8 *param_1,longlong param_2)

{
  *param_1 = std::exception::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  __std_exception_copy(param_2 + 8);
  *param_1 = std::runtime_error::vftable;
  return param_1;
}



undefined8 * FUN_180003ce0(undefined8 *param_1,undefined8 param_2)

{
  undefined8 local_18;
  undefined1 local_10;
  
  local_10 = 1;
  *param_1 = std::exception::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  local_18 = param_2;
  __std_exception_copy(&local_18);
  *param_1 = std::runtime_error::vftable;
  return param_1;
}



void FUN_180003d40(longlong param_1)

{
  if (*(void **)(param_1 + 8) != (void *)0x0) {
    FUN_18000128f(*(void **)(param_1 + 8));
    return;
  }
  return;
}



void FUN_180003d60(longlong *param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)param_1[7];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != param_1);
    param_1[7] = 0;
  }
  return;
}



void FUN_180003da0(longlong *param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)param_1[7];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != param_1);
    param_1[7] = 0;
  }
  return;
}



void FUN_180003de0(longlong param_1)

{
  void *pvVar1;
  void *pvVar2;
  
  pvVar1 = *(void **)(param_1 + 0x18);
  if (pvVar1 != (void *)0x0) {
    pvVar2 = pvVar1;
    if ((0xfff < (*(longlong *)(param_1 + 0x28) - (longlong)pvVar1 & 0xfffffffffffffff8U)) &&
       (pvVar2 = *(void **)((longlong)pvVar1 + -8),
       0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar2)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_18000128f(pvVar2);
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
    *(undefined8 *)(param_1 + 0x28) = 0;
  }
  thunk_FUN_180004060((longlong *)(param_1 + 8));
  return;
}



// Library Function - Multiple Matches With Different Base Names
//  public: __cdecl std::priority_queue<unsigned __int64,class std::vector<unsigned __int64,struct
// std::_Parallelism_allocator<unsigned __int64> >,struct std::greater<void>
// >::~priority_queue<unsigned __int64,class std::vector<unsigned __int64,struct
// std::_Parallelism_allocator<unsigned __int64> >,struct std::greater<void> >(void) __ptr64
//  public: __cdecl std::vector<struct CHN * __ptr64,class std::allocator<struct CHN * __ptr64>
// >::~vector<struct CHN * __ptr64,class std::allocator<struct CHN * __ptr64> >(void) __ptr64
//  public: __cdecl std::vector<unsigned __int64,struct std::_Parallelism_allocator<unsigned
// __int64> >::~vector<unsigned __int64,struct std::_Parallelism_allocator<unsigned __int64> >(void)
// __ptr64
//  public: __cdecl std::vector<unsigned __int64,class std::allocator<unsigned __int64>
// >::~vector<unsigned __int64,class std::allocator<unsigned __int64> >(void) __ptr64
//   7 names - too many to list
// 
// Library: Visual Studio 2019 Release

void FID_conflict__vector<>(longlong *param_1)

{
  void *pvVar1;
  void *pvVar2;
  
  pvVar1 = (void *)*param_1;
  if (pvVar1 != (void *)0x0) {
    pvVar2 = pvVar1;
    if ((0xfff < (param_1[2] - (longlong)pvVar1 & 0xfffffffffffffff8U)) &&
       (pvVar2 = *(void **)((longlong)pvVar1 + -8),
       0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar2)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_18000128f(pvVar2);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}



void FUN_180003ee0(longlong param_1)

{
  if (*(longlong *)(param_1 + 8) != 0) {
    thunk_FUN_180004ff0((longlong *)(*(longlong *)(param_1 + 8) + 0x18));
  }
  if (*(void **)(param_1 + 8) != (void *)0x0) {
    FUN_18000128f(*(void **)(param_1 + 8));
    return;
  }
  return;
}



void FUN_180003f30(undefined8 *param_1)

{
  longlong *plVar1;
  SignatureData *pSVar2;
  void *pvVar3;
  SignatureData *this;
  void *pvVar4;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    return;
  }
  this = (SignatureData *)*plVar1;
  if (this != (SignatureData *)0x0) {
    pSVar2 = (SignatureData *)plVar1[1];
    for (; this != pSVar2; this = this + 0x48) {
      RC::SignatureData::~SignatureData(this);
    }
    pvVar3 = (void *)*plVar1;
    pvVar4 = pvVar3;
    if ((0xfff < (ulonglong)(((plVar1[2] - (longlong)pvVar3) / 0x48) * 0x48)) &&
       (pvVar4 = *(void **)((longlong)pvVar3 + -8),
       0x1f < (ulonglong)((longlong)pvVar3 + (-8 - (longlong)pvVar4)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_18000128f(pvVar4);
    *plVar1 = 0;
    plVar1[1] = 0;
    plVar1[2] = 0;
  }
  return;
}



void FUN_180003f40(undefined8 *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  void *pvVar3;
  longlong *plVar4;
  void *pvVar5;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    return;
  }
  plVar4 = (longlong *)*plVar1;
  if (plVar4 != (longlong *)0x0) {
    plVar2 = (longlong *)plVar1[1];
    for (; plVar4 != plVar2; plVar4 = plVar4 + 0x1b) {
      thunk_FUN_180004140(plVar4);
    }
    pvVar3 = (void *)*plVar1;
    pvVar5 = pvVar3;
    if ((0xfff < (ulonglong)(((plVar1[2] - (longlong)pvVar3) / 0xd8) * 0xd8)) &&
       (pvVar5 = *(void **)((longlong)pvVar3 + -8),
       0x1f < (ulonglong)((longlong)pvVar3 + (-8 - (longlong)pvVar5)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_18000128f(pvVar5);
    *plVar1 = 0;
    plVar1[1] = 0;
    plVar1[2] = 0;
  }
  return;
}



void FUN_180003f50(undefined8 *param_1)

{
  SignatureData *pSVar1;
  SignatureData *this;
  
  pSVar1 = (SignatureData *)param_1[1];
  for (this = (SignatureData *)*param_1; this != pSVar1; this = this + 0x48) {
    RC::SignatureData::~SignatureData(this);
  }
  return;
}



void FUN_180003f90(undefined8 *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar1 = (longlong *)param_1[1];
  for (plVar2 = (longlong *)*param_1; plVar2 != plVar1; plVar2 = plVar2 + 0x1b) {
    thunk_FUN_180004140(plVar2);
  }
  return;
}



void FUN_180003fe0(longlong *param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)param_1[7];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != param_1);
    param_1[7] = 0;
  }
  return;
}



void FUN_180004020(longlong *param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)param_1[7];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != param_1);
    param_1[7] = 0;
  }
  return;
}



void FUN_180004060(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)*param_1;
  *(undefined8 *)puVar1[1] = 0;
  puVar1 = (undefined8 *)*puVar1;
  while (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined8 *)*puVar1;
    thunk_FUN_180004ff0(puVar1 + 3);
    FUN_18000128f(puVar1);
    puVar1 = puVar2;
  }
  FUN_18000128f((void *)*param_1);
  return;
}



void FUN_180004083(void)

{
  longlong *plVar1;
  longlong *unaff_RBX;
  undefined8 *unaff_RSI;
  
  do {
    plVar1 = (longlong *)*unaff_RBX;
    thunk_FUN_180004ff0(unaff_RBX + 3);
    FUN_18000128f(unaff_RBX);
    unaff_RBX = plVar1;
  } while (plVar1 != (longlong *)0x0);
  FUN_18000128f((void *)*unaff_RSI);
  return;
}



void FUN_1800040b6(void)

{
  undefined8 *unaff_RSI;
  
  FUN_18000128f((void *)*unaff_RSI);
  return;
}



void thunk_FUN_180003de0(longlong param_1)

{
  thunk_FUN_180003de0(param_1);
  return;
}



void thunk_FUN_180004f10(longlong *param_1)

{
  thunk_FUN_180004f10(param_1);
  return;
}



void thunk_FUN_180004ff0(longlong *param_1)

{
  thunk_FUN_180004ff0(param_1);
  return;
}



void FUN_180004120(CppUserModBase *param_1)

{
  *(undefined ***)param_1 = RC::AllowModsMod::vftable;
                    // WARNING: Could not recover jumptable at 0x00018000412a. Too many branches
                    // WARNING: Treating indirect jump as call
  RC::CppUserModBase::~CppUserModBase(param_1);
  return;
}



void FUN_180004140(longlong *param_1)

{
  void *pvVar1;
  longlong *plVar2;
  void *pvVar3;
  
  pvVar1 = (void *)param_1[0x14];
  if (pvVar1 != (void *)0x0) {
    pvVar3 = pvVar1;
    if ((0xfff < (param_1[0x16] - (longlong)pvVar1 & 0xfffffffffffffff0U)) &&
       (pvVar3 = *(void **)((longlong)pvVar1 + -8),
       0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar3)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_18000128f(pvVar3);
    param_1[0x14] = 0;
    param_1[0x15] = 0;
    param_1[0x16] = 0;
  }
  plVar2 = (longlong *)param_1[0x12];
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x20))(plVar2,plVar2 != param_1 + 0xb);
    param_1[0x12] = 0;
  }
  plVar2 = (longlong *)param_1[10];
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x20))(plVar2,plVar2 != param_1 + 3);
    param_1[10] = 0;
  }
  thunk_FUN_180004f10(param_1);
  return;
}



void FUN_1800041a4(void)

{
  longlong *plVar1;
  longlong *unaff_RBX;
  longlong unaff_RSI;
  
  plVar1 = (longlong *)unaff_RBX[0x12];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != unaff_RBX + 0xb);
    unaff_RBX[0x12] = unaff_RSI;
  }
  plVar1 = (longlong *)unaff_RBX[10];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != unaff_RBX + 3);
    unaff_RBX[10] = unaff_RSI;
  }
  thunk_FUN_180004f10(unaff_RBX);
  return;
}



void __cdecl _invalid_parameter_noinfo_noreturn(void)

{
                    // WARNING: Subroutine does not return
  _invalid_parameter_noinfo_noreturn();
}



void FUN_180004240(undefined8 *param_1)

{
  *param_1 = std::exception::vftable;
  __std_exception_destroy(param_1 + 1);
  return;
}



void FUN_180004260(undefined8 *param_1)

{
  *param_1 = std::exception::vftable;
  __std_exception_destroy(param_1 + 1);
  return;
}



void FUN_180004280(undefined8 *param_1)

{
  *param_1 = std::exception::vftable;
  __std_exception_destroy(param_1 + 1);
  return;
}



void FUN_1800042a0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  SignatureData *pSVar2;
  SignatureData *pSVar3;
  undefined8 uVar4;
  undefined1 auStack_f8 [32];
  undefined4 local_d8;
  SignatureData *local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  SignatureData **local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 *local_98;
  SignatureData *local_90;
  SignatureData *local_88;
  SignatureData **local_80;
  char *local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_28;
  
  local_28 = DAT_180010028 ^ (ulonglong)auStack_f8;
  local_d8 = 0;
  uVar1 = param_1[2];
  uStack_a8 = param_1[1];
  local_b0 = *param_1;
  local_78 = (char *)0x0;
  uStack_70 = 0;
  local_68 = 0;
  local_60 = 0xf;
  local_a0 = uVar1;
  local_98 = param_2;
  local_78 = (char *)thunk_FUN_180005160(&local_78,0x70);
  local_68 = 0x6e;
  local_60 = 0x6f;
  builtin_strncpy(local_78,
                  "48 89 5C 24 08 57 48 83 EC 20 65 48 8B 04 25 58 00 00 00 48 8B F9 8B ?? ?? ?? ?? ?? B9 ?? ?? 00 00 4C 8B 04 D0"
                  ,0x6f);
  local_58 = 0;
  uStack_48 = 0;
  local_40 = 0;
  local_38 = 0xf;
  local_50 = 0;
  local_d0 = (SignatureData *)0x0;
  uStack_c8 = 0;
  local_c0 = 0;
  thunk_FUN_1800048f0((ulonglong *)&local_d0,1);
  pSVar2 = local_d0;
  local_b8 = &local_d0;
  local_90 = local_d0;
  local_88 = local_d0;
  local_80 = &local_d0;
  RC::SignatureData::SignatureData(local_d0,(SignatureData *)&local_78);
  uVar4 = local_c0;
  pSVar3 = local_d0;
  local_c0 = 0;
  uStack_c8 = 0;
  local_d0 = (SignatureData *)0x0;
  *param_2 = pSVar3;
  param_2[1] = pSVar2 + 0x48;
  param_2[2] = uVar4;
  param_2[3] = std::_Func_impl_no_alloc<>::vftable;
  param_2[4] = local_b0;
  param_2[5] = uStack_a8;
  param_2[6] = local_a0;
  param_2[10] = param_2 + 3;
  param_2[0xb] = std::_Func_impl_no_alloc<>::vftable;
  param_2[0xc] = uVar1;
  param_2[0x12] = param_2 + 0xb;
  *(undefined1 *)(param_2 + 0x13) = 0;
  param_2[0x14] = 0;
  param_2[0x15] = 0;
  param_2[0x16] = 0;
  *(undefined2 *)(param_2 + 0x17) = 0;
  param_2[0x18] = 0;
  param_2[0x19] = 0;
  param_2[0x1a] = 0;
  local_d8 = 1;
  _eh_vector_destructor_iterator_(&local_78,0x48,1,~SignatureData_exref);
  thunk_FUN_1800062a0(local_28 ^ (ulonglong)auStack_f8);
  return;
}



CppUserModBase * FUN_180004590(CppUserModBase *param_1,uint param_2)

{
  *(undefined ***)param_1 = RC::AllowModsMod::vftable;
  RC::CppUserModBase::~CppUserModBase(param_1);
  if ((param_2 & 1) != 0) {
    FUN_18000128f(param_1);
  }
  return param_1;
}



undefined8 * FUN_1800045e0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = std::exception::vftable;
  __std_exception_destroy(param_1 + 1);
  if ((param_2 & 1) != 0) {
    FUN_18000128f(param_1);
  }
  return param_1;
}



undefined8 * FUN_180004640(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = std::exception::vftable;
  __std_exception_destroy(param_1 + 1);
  if ((param_2 & 1) != 0) {
    FUN_18000128f(param_1);
  }
  return param_1;
}



undefined8 * FUN_1800046a0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = std::exception::vftable;
  __std_exception_destroy(param_1 + 1);
  if ((param_2 & 1) != 0) {
    FUN_18000128f(param_1);
  }
  return param_1;
}



undefined8 * FUN_180004700(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = std::exception::vftable;
  __std_exception_destroy(param_1 + 1);
  if ((param_2 & 1) != 0) {
    FUN_18000128f(param_1);
  }
  return param_1;
}



void FUN_180004760(longlong *param_1,ulonglong param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  code *pcVar3;
  void *pvVar4;
  longlong lVar5;
  void *pvVar6;
  undefined8 *puVar7;
  undefined8 local_res18;
  
  local_res18 = param_3;
  if (param_2 <= (ulonglong)(param_1[1] - *param_1 >> 3)) {
    thunk_FUN_180003700((undefined8 *)*param_1,(undefined8 *)param_1[1],&local_res18);
    return;
  }
  if (0x1fffffffffffffff < param_2) {
FUN_180004895:
    thunk_FUN_180004ee0();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  uVar2 = param_2 * 8;
  if (uVar2 < 0x1000) {
    if (uVar2 == 0) {
      puVar7 = (undefined8 *)0x0;
    }
    else {
      puVar7 = (undefined8 *)operator_new(uVar2);
    }
  }
  else {
    if (uVar2 + 0x27 <= uVar2) goto FUN_180004895;
    pvVar4 = operator_new(uVar2 + 0x27);
    if (pvVar4 == (void *)0x0)
    goto API_MS_WIN_CRT_RUNTIME_L1_1_0_DLL__invalid_parameter_noinfo_noreturn;
    puVar7 = (undefined8 *)((longlong)pvVar4 + 0x27U & 0xffffffffffffffe0);
    puVar7[-1] = pvVar4;
  }
  pvVar4 = (void *)*param_1;
  lVar5 = param_1[2] - (longlong)pvVar4 >> 3;
  if (lVar5 != 0) {
    pvVar6 = pvVar4;
    if ((0xfff < (ulonglong)(lVar5 * 8)) &&
       (pvVar6 = *(void **)((longlong)pvVar4 + -8),
       0x1f < (ulonglong)((longlong)pvVar4 + (-8 - (longlong)pvVar6)))) {
API_MS_WIN_CRT_RUNTIME_L1_1_0_DLL__invalid_parameter_noinfo_noreturn:
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_18000128f(pvVar6);
  }
  puVar1 = puVar7 + param_2;
  *param_1 = (longlong)puVar7;
  param_1[1] = (longlong)puVar1;
  param_1[2] = (longlong)puVar1;
  for (; puVar7 != puVar1; puVar7 = puVar7 + 1) {
    *puVar7 = param_3;
  }
  return;
}



void FUN_18000479a(undefined8 param_1,ulonglong param_2)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  code *pcVar3;
  ulonglong in_RAX;
  void *pvVar4;
  longlong lVar5;
  void *pvVar6;
  undefined8 unaff_RBX;
  undefined8 *puVar7;
  longlong *unaff_R14;
  
  if (in_RAX < param_2) {
FUN_180004895:
    thunk_FUN_180004ee0();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  uVar2 = param_2 * 8;
  if (uVar2 < 0x1000) {
    if (uVar2 == 0) {
      puVar7 = (undefined8 *)0x0;
    }
    else {
      puVar7 = (undefined8 *)operator_new(uVar2);
    }
  }
  else {
    if (uVar2 + 0x27 <= uVar2) goto FUN_180004895;
    pvVar4 = operator_new(uVar2 + 0x27);
    if (pvVar4 == (void *)0x0)
    goto API_MS_WIN_CRT_RUNTIME_L1_1_0_DLL__invalid_parameter_noinfo_noreturn;
    puVar7 = (undefined8 *)((longlong)pvVar4 + 0x27U & 0xffffffffffffffe0);
    puVar7[-1] = pvVar4;
  }
  pvVar4 = (void *)*unaff_R14;
  lVar5 = unaff_R14[2] - (longlong)pvVar4 >> 3;
  if (lVar5 != 0) {
    pvVar6 = pvVar4;
    if ((0xfff < (ulonglong)(lVar5 * 8)) &&
       (pvVar6 = *(void **)((longlong)pvVar4 + -8),
       0x1f < (ulonglong)((longlong)pvVar4 + (-8 - (longlong)pvVar6)))) {
API_MS_WIN_CRT_RUNTIME_L1_1_0_DLL__invalid_parameter_noinfo_noreturn:
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_18000128f(pvVar6);
  }
  puVar1 = puVar7 + param_2;
  *unaff_R14 = (longlong)puVar7;
  unaff_R14[1] = (longlong)puVar1;
  unaff_R14[2] = (longlong)puVar1;
  for (; puVar7 != puVar1; puVar7 = puVar7 + 1) {
    *puVar7 = unaff_RBX;
  }
  return;
}



void __cdecl _invalid_parameter_noinfo_noreturn(void)

{
                    // WARNING: Subroutine does not return
  _invalid_parameter_noinfo_noreturn();
}



void FUN_180004879(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  thunk_FUN_180003700(param_4,param_1,(undefined8 *)&stack0x00000040);
  return;
}



void FUN_180004895(void)

{
  code *pcVar1;
  
  thunk_FUN_180004ee0();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



void FUN_1800048f0(ulonglong *param_1,ulonglong param_2)

{
  ulonglong uVar1;
  code *pcVar2;
  void *pvVar3;
  void *pvVar4;
  
  if (0x38e38e38e38e38e < param_2) {
    thunk_FUN_180005120();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  uVar1 = param_2 * 0x48;
  if (uVar1 < 0x1000) {
    if (uVar1 == 0) {
      pvVar4 = (void *)0x0;
    }
    else {
      pvVar4 = operator_new(uVar1);
    }
  }
  else {
    if (uVar1 + 0x27 <= uVar1) {
      thunk_FUN_180004ee0();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pvVar3 = operator_new(uVar1 + 0x27);
    if (pvVar3 == (void *)0x0) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    pvVar4 = (void *)((longlong)pvVar3 + 0x27U & 0xffffffffffffffe0);
    *(void **)((longlong)pvVar4 - 8) = pvVar3;
  }
  *param_1 = (ulonglong)pvVar4;
  param_1[1] = (ulonglong)pvVar4;
  param_1[2] = (ulonglong)((longlong)pvVar4 + uVar1);
  return;
}



void FUN_18000490c(void)

{
  ulonglong uVar1;
  code *pcVar2;
  longlong in_RAX;
  void *pvVar3;
  void *pvVar4;
  ulonglong *unaff_RDI;
  
  uVar1 = in_RAX * 8;
  if (uVar1 < 0x1000) {
    if (uVar1 == 0) {
      pvVar4 = (void *)0x0;
    }
    else {
      pvVar4 = operator_new(uVar1);
    }
  }
  else {
    if (uVar1 + 0x27 <= uVar1) {
      thunk_FUN_180004ee0();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pvVar3 = operator_new(uVar1 + 0x27);
    if (pvVar3 == (void *)0x0) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    pvVar4 = (void *)((longlong)pvVar3 + 0x27U & 0xffffffffffffffe0);
    *(void **)((longlong)pvVar4 - 8) = pvVar3;
  }
  *unaff_RDI = (ulonglong)pvVar4;
  unaff_RDI[1] = (ulonglong)pvVar4;
  unaff_RDI[2] = (ulonglong)((longlong)pvVar4 + uVar1);
  return;
}



void FUN_180004977(void)

{
  code *pcVar1;
  
  thunk_FUN_180005120();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



void FUN_18000497d(void)

{
  code *pcVar1;
  
  thunk_FUN_180004ee0();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



undefined8 * FUN_1800049b0(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  param_2[1] = *(undefined8 *)(param_1 + 8);
  param_2[2] = uVar1;
  param_2[3] = *(undefined8 *)(param_1 + 0x18);
  return param_2;
}



undefined8 * FUN_1800049e0(longlong param_1,undefined8 *param_2)

{
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  param_2[1] = *(undefined8 *)(param_1 + 8);
  return param_2;
}



void FUN_180004a00(void *param_1,char param_2)

{
  if (param_2 != '\0') {
    FUN_18000128f(param_1);
    return;
  }
  return;
}



void FUN_180004a20(void *param_1,char param_2)

{
  if (param_2 != '\0') {
    FUN_18000128f(param_1);
    return;
  }
  return;
}



ulonglong FUN_180004a40(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  
  if (**(ulonglong **)(param_1 + 8) < *(ulonglong *)(param_2 + 200)) {
    **(ulonglong **)(param_1 + 8) = *(ulonglong *)(param_2 + 200);
  }
  **(char **)(param_1 + 0x10) = **(char **)(param_1 + 0x10) + '\x01';
  if (**(char **)(param_1 + 0x10) == '\x02') {
    uVar1 = **(undefined8 **)(param_1 + 8);
    **(undefined8 **)(param_1 + 0x18) = uVar1;
    *(undefined1 *)(param_2 + 0xb8) = 1;
    return CONCAT71((int7)((ulonglong)uVar1 >> 8),1);
  }
  return (ulonglong)*(char **)(param_1 + 0x10) & 0xffffffffffffff00;
}



void FUN_180004a90(longlong param_1,longlong param_2)

{
  DWORD local_res8 [2];
  wchar_t *local_18;
  undefined8 uStack_10;
  
  if (*(char *)(param_2 + 0xb8) != '\0') {
    VirtualProtect((LPVOID)**(undefined8 **)(param_1 + 8),1,0x40,local_res8);
    *(undefined1 *)**(undefined8 **)(param_1 + 8) = 0xc3;
    VirtualProtect((LPVOID)**(undefined8 **)(param_1 + 8),1,local_res8[0],local_res8);
    local_18 = L"[AllowModsMod]: Delegate found and patched.\n";
    uStack_10 = 0x2c;
    thunk_FUN_1800037b0((undefined4 *)&local_18);
  }
  if (*(char *)(param_2 + 0xb8) == '\0') {
    local_18 = L"[AllowModsMod]: Delegate not found. Unable to patch.\n";
    uStack_10 = 0x35;
    thunk_FUN_1800037b0((undefined4 *)&local_18);
  }
  return;
}



void FUN_180004b90(longlong param_1,ulonglong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  code *pcVar7;
  longlong *plVar8;
  ulonglong uVar9;
  longlong lVar10;
  undefined8 *puVar11;
  
  for (lVar10 = 0x3f; 0xfffffffffffffffU >> lVar10 == 0; lVar10 = lVar10 + -1) {
  }
  if ((ulonglong)(1L << ((byte)lVar10 & 0x3f)) < param_2) {
    std::_Xlength_error("invalid hash bucket count");
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  plVar1 = *(longlong **)(param_1 + 8);
  uVar9 = param_2 - 1 | 1;
  lVar10 = 0x3f;
  if (uVar9 != 0) {
    for (; uVar9 >> lVar10 == 0; lVar10 = lVar10 + -1) {
    }
  }
  lVar10 = 1L << ((char)lVar10 + 1U & 0x3f);
  thunk_FUN_180004760((longlong *)(param_1 + 0x18),lVar10 * 2,plVar1);
  *(longlong *)(param_1 + 0x38) = lVar10;
  *(longlong *)(param_1 + 0x30) = lVar10 + -1;
  plVar8 = (longlong *)**(undefined8 **)(param_1 + 8);
joined_r0x000180004c05:
  do {
    while( true ) {
      while( true ) {
        if (plVar8 == plVar1) {
          return;
        }
        plVar2 = (longlong *)*plVar8;
        puVar11 = (undefined8 *)
                  (((((((ulonglong)*(byte *)(plVar8 + 2) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                      (ulonglong)*(byte *)((longlong)plVar8 + 0x11)) * 0x100000001b3 ^
                     (ulonglong)*(byte *)((longlong)plVar8 + 0x12)) * 0x100000001b3 ^
                    (ulonglong)*(byte *)((longlong)plVar8 + 0x13)) * 0x100000001b3 &
                   *(ulonglong *)(param_1 + 0x30)) * 0x10 + *(longlong *)(param_1 + 0x18));
        if ((longlong *)*puVar11 != plVar1) break;
        *puVar11 = plVar8;
        puVar11[1] = plVar8;
        plVar8 = plVar2;
      }
      plVar3 = (longlong *)puVar11[1];
      if ((int)plVar8[2] != (int)plVar3[2]) break;
      plVar3 = (longlong *)*plVar3;
      if (plVar3 != plVar8) {
        plVar4 = (longlong *)plVar8[1];
        *plVar4 = (longlong)plVar2;
        puVar5 = (undefined8 *)plVar2[1];
        *puVar5 = plVar3;
        puVar6 = (undefined8 *)plVar3[1];
        *puVar6 = plVar8;
        plVar3[1] = (longlong)puVar5;
        plVar2[1] = (longlong)plVar4;
        plVar8[1] = (longlong)puVar6;
      }
      puVar11[1] = plVar8;
      plVar8 = plVar2;
    }
    do {
      if ((longlong *)*puVar11 == plVar3) {
        plVar4 = (longlong *)plVar8[1];
        *plVar4 = (longlong)plVar2;
        puVar5 = (undefined8 *)plVar2[1];
        *puVar5 = plVar3;
        puVar6 = (undefined8 *)plVar3[1];
        *puVar6 = plVar8;
        plVar3[1] = (longlong)puVar5;
        plVar2[1] = (longlong)plVar4;
        plVar8[1] = (longlong)puVar6;
        *puVar11 = plVar8;
        plVar8 = plVar2;
        goto joined_r0x000180004c05;
      }
      plVar3 = (longlong *)plVar3[1];
    } while ((int)plVar8[2] != (int)plVar3[2]);
    lVar10 = *plVar3;
    plVar3 = (longlong *)plVar8[1];
    *plVar3 = (longlong)plVar2;
    plVar4 = (longlong *)plVar2[1];
    *plVar4 = lVar10;
    puVar11 = *(undefined8 **)(lVar10 + 8);
    *puVar11 = plVar8;
    *(longlong **)(lVar10 + 8) = plVar4;
    plVar2[1] = (longlong)plVar3;
    plVar8[1] = (longlong)puVar11;
    plVar8 = plVar2;
  } while( true );
}



void FUN_180004bc2(void)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  ulonglong in_RAX;
  longlong unaff_RSI;
  ulonglong unaff_RDI;
  longlong lVar8;
  undefined8 *puVar9;
  
  plVar1 = *(longlong **)(unaff_RSI + 8);
  lVar8 = 0x3f;
  if ((in_RAX | unaff_RDI) != 0) {
    for (; (in_RAX | unaff_RDI) >> lVar8 == 0; lVar8 = lVar8 + -1) {
    }
  }
  lVar8 = unaff_RDI << ((char)lVar8 + 1U & 0x3f);
  thunk_FUN_180004760((longlong *)(unaff_RSI + 0x18),lVar8 * 2,plVar1);
  *(longlong *)(unaff_RSI + 0x38) = lVar8;
  *(longlong *)(unaff_RSI + 0x30) = lVar8 + -1;
  plVar7 = (longlong *)**(undefined8 **)(unaff_RSI + 8);
joined_r0x000180004c05:
  do {
    while( true ) {
      while( true ) {
        if (plVar7 == plVar1) {
          return;
        }
        plVar2 = (longlong *)*plVar7;
        puVar9 = (undefined8 *)
                 (((((((ulonglong)*(byte *)(plVar7 + 2) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                     (ulonglong)*(byte *)((longlong)plVar7 + 0x11)) * 0x100000001b3 ^
                    (ulonglong)*(byte *)((longlong)plVar7 + 0x12)) * 0x100000001b3 ^
                   (ulonglong)*(byte *)((longlong)plVar7 + 0x13)) * 0x100000001b3 &
                  *(ulonglong *)(unaff_RSI + 0x30)) * 0x10 + *(longlong *)(unaff_RSI + 0x18));
        if ((longlong *)*puVar9 != plVar1) break;
        *puVar9 = plVar7;
        puVar9[1] = plVar7;
        plVar7 = plVar2;
      }
      plVar3 = (longlong *)puVar9[1];
      if ((int)plVar7[2] != (int)plVar3[2]) break;
      plVar3 = (longlong *)*plVar3;
      if (plVar3 != plVar7) {
        plVar4 = (longlong *)plVar7[1];
        *plVar4 = (longlong)plVar2;
        puVar5 = (undefined8 *)plVar2[1];
        *puVar5 = plVar3;
        puVar6 = (undefined8 *)plVar3[1];
        *puVar6 = plVar7;
        plVar3[1] = (longlong)puVar5;
        plVar2[1] = (longlong)plVar4;
        plVar7[1] = (longlong)puVar6;
      }
      puVar9[1] = plVar7;
      plVar7 = plVar2;
    }
    do {
      if ((longlong *)*puVar9 == plVar3) {
        plVar4 = (longlong *)plVar7[1];
        *plVar4 = (longlong)plVar2;
        puVar5 = (undefined8 *)plVar2[1];
        *puVar5 = plVar3;
        puVar6 = (undefined8 *)plVar3[1];
        *puVar6 = plVar7;
        plVar3[1] = (longlong)puVar5;
        plVar2[1] = (longlong)plVar4;
        plVar7[1] = (longlong)puVar6;
        *puVar9 = plVar7;
        plVar7 = plVar2;
        goto joined_r0x000180004c05;
      }
      plVar3 = (longlong *)plVar3[1];
    } while ((int)plVar7[2] != (int)plVar3[2]);
    lVar8 = *plVar3;
    plVar3 = (longlong *)plVar7[1];
    *plVar3 = (longlong)plVar2;
    plVar4 = (longlong *)plVar2[1];
    *plVar4 = lVar8;
    puVar9 = *(undefined8 **)(lVar8 + 8);
    *puVar9 = plVar7;
    *(longlong **)(lVar8 + 8) = plVar4;
    plVar2[1] = (longlong)plVar3;
    plVar7[1] = (longlong)puVar9;
    plVar7 = plVar2;
  } while( true );
}



void FUN_180004c0b(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  longlong *in_RAX;
  longlong *unaff_RBX;
  longlong unaff_RSI;
  longlong *plVar6;
  
  do {
    param_1 = (longlong *)*param_1;
    plVar6 = (longlong *)
             (((((((ulonglong)*(byte *)((longlong)in_RAX + 0x10) ^ 0xcbf29ce484222325) *
                  0x100000001b3 ^ (ulonglong)*(byte *)((longlong)in_RAX + 0x11)) * 0x100000001b3 ^
                (ulonglong)*(byte *)((longlong)in_RAX + 0x12)) * 0x100000001b3 ^
               (ulonglong)*(byte *)((longlong)in_RAX + 0x13)) * 0x100000001b3 &
              *(ulonglong *)(unaff_RSI + 0x30)) * 0x10 + *(longlong *)(unaff_RSI + 0x18));
    if ((longlong *)*plVar6 == unaff_RBX) {
      *plVar6 = (longlong)in_RAX;
      plVar6[1] = (longlong)in_RAX;
    }
    else {
      plVar1 = (longlong *)plVar6[1];
      if (*(int *)((longlong)in_RAX + 0x10) == (int)plVar1[2]) {
        lVar2 = *plVar1;
        if ((longlong *)lVar2 != in_RAX) {
          plVar1 = *(longlong **)((longlong)in_RAX + 8);
          *plVar1 = (longlong)param_1;
          plVar3 = (longlong *)param_1[1];
          *plVar3 = lVar2;
          plVar4 = *(longlong **)(lVar2 + 8);
          *plVar4 = (longlong)in_RAX;
          *(longlong **)(lVar2 + 8) = plVar3;
          param_1[1] = (longlong)plVar1;
          *(longlong **)((longlong)in_RAX + 8) = plVar4;
        }
        plVar6[1] = (longlong)in_RAX;
      }
      else {
        do {
          if ((longlong *)*plVar6 == plVar1) {
            plVar3 = *(longlong **)((longlong)in_RAX + 8);
            *plVar3 = (longlong)param_1;
            puVar5 = (undefined8 *)param_1[1];
            *puVar5 = plVar1;
            plVar4 = (longlong *)plVar1[1];
            *plVar4 = (longlong)in_RAX;
            plVar1[1] = (longlong)puVar5;
            param_1[1] = (longlong)plVar3;
            *(longlong **)((longlong)in_RAX + 8) = plVar4;
            *plVar6 = (longlong)in_RAX;
            goto LAB_180004cf3;
          }
          plVar1 = (longlong *)plVar1[1];
        } while (*(int *)((longlong)in_RAX + 0x10) != (int)plVar1[2]);
        lVar2 = *plVar1;
        plVar6 = *(longlong **)((longlong)in_RAX + 8);
        *plVar6 = (longlong)param_1;
        plVar1 = (longlong *)param_1[1];
        *plVar1 = lVar2;
        plVar3 = *(longlong **)(lVar2 + 8);
        *plVar3 = (longlong)in_RAX;
        *(longlong **)(lVar2 + 8) = plVar1;
        param_1[1] = (longlong)plVar6;
        *(longlong **)((longlong)in_RAX + 8) = plVar3;
      }
    }
LAB_180004cf3:
    in_RAX = param_1;
    if (param_1 == unaff_RBX) {
      return;
    }
  } while( true );
}



void FUN_180004d04(void)

{
  return;
}



void FUN_180004d19(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  longlong *in_RAX;
  longlong *unaff_RBX;
  ulonglong unaff_RBP;
  longlong unaff_RSI;
  longlong unaff_RDI;
  undefined8 *puVar6;
  
code_r0x000180004d19:
  lVar3 = *param_2;
  puVar6 = (undefined8 *)in_RAX[1];
  *puVar6 = param_1;
  plVar4 = (longlong *)param_1[1];
  *plVar4 = lVar3;
  puVar5 = *(undefined8 **)(lVar3 + 8);
  *puVar5 = in_RAX;
  *(longlong **)(lVar3 + 8) = plVar4;
  param_1[1] = (longlong)puVar6;
  in_RAX[1] = (longlong)puVar5;
  in_RAX = param_1;
  do {
    while( true ) {
      while( true ) {
        if (in_RAX == unaff_RBX) {
          return;
        }
        param_1 = (longlong *)*in_RAX;
        puVar6 = (undefined8 *)
                 ((((((*(byte *)(in_RAX + 2) ^ unaff_RBP) * unaff_RDI ^
                     (ulonglong)*(byte *)((longlong)in_RAX + 0x11)) * unaff_RDI ^
                    (ulonglong)*(byte *)((longlong)in_RAX + 0x12)) * unaff_RDI ^
                   (ulonglong)*(byte *)((longlong)in_RAX + 0x13)) * unaff_RDI &
                  *(ulonglong *)(unaff_RSI + 0x30)) * 0x10 + *(longlong *)(unaff_RSI + 0x18));
        if ((longlong *)*puVar6 != unaff_RBX) break;
        *puVar6 = in_RAX;
        puVar6[1] = in_RAX;
        in_RAX = param_1;
      }
      param_2 = (longlong *)puVar6[1];
      if ((int)in_RAX[2] != (int)param_2[2]) break;
      plVar4 = (longlong *)*param_2;
      if (plVar4 != in_RAX) {
        plVar1 = (longlong *)in_RAX[1];
        *plVar1 = (longlong)param_1;
        puVar5 = (undefined8 *)param_1[1];
        *puVar5 = plVar4;
        puVar2 = (undefined8 *)plVar4[1];
        *puVar2 = in_RAX;
        plVar4[1] = (longlong)puVar5;
        param_1[1] = (longlong)plVar1;
        in_RAX[1] = (longlong)puVar2;
      }
      puVar6[1] = in_RAX;
      in_RAX = param_1;
    }
    while ((longlong *)*puVar6 != param_2) {
      param_2 = (longlong *)param_2[1];
      if ((int)in_RAX[2] == (int)param_2[2]) goto code_r0x000180004d19;
    }
    plVar4 = (longlong *)in_RAX[1];
    *plVar4 = (longlong)param_1;
    puVar5 = (undefined8 *)param_1[1];
    *puVar5 = param_2;
    puVar2 = (undefined8 *)param_2[1];
    *puVar2 = in_RAX;
    param_2[1] = (longlong)puVar5;
    param_1[1] = (longlong)plVar4;
    in_RAX[1] = (longlong)puVar2;
    *puVar6 = in_RAX;
    in_RAX = param_1;
  } while( true );
}



void FUN_180004d3f(void)

{
  code *pcVar1;
  
  std::_Xlength_error("invalid hash bucket count");
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



longlong FUN_180004dc0(longlong param_1)

{
  return param_1 + 8;
}



longlong FUN_180004dd0(longlong param_1)

{
  return param_1 + 8;
}



void * FUN_180004de0(void *param_1)

{
  code *pcVar1;
  void *pvVar2;
  longlong lVar3;
  size_t _Count;
  longlong lVar4;
  
  lVar3 = -1;
  do {
    lVar4 = lVar3;
    lVar3 = lVar4 + 1;
  } while (*(short *)((longlong)param_1 + lVar3 * 2) != 0);
  _Count = lVar4 + 2;
  pvVar2 = calloc(_Count,2);
  if (pvVar2 != (void *)0x0) {
    memcpy(pvVar2,param_1,_Count * 2);
    return pvVar2;
  }
  std::_Xbad_alloc();
  pcVar1 = (code *)swi(3);
  pvVar2 = (void *)(*pcVar1)();
  return pvVar2;
}



undefined8 * FUN_180004e70(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  param_2[1] = *(undefined8 *)(param_1 + 8);
  param_2[2] = uVar1;
  param_2[3] = *(undefined8 *)(param_1 + 0x18);
  return param_2;
}



undefined8 * FUN_180004ea0(longlong param_1,undefined8 *param_2)

{
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  param_2[1] = *(undefined8 *)(param_1 + 8);
  return param_2;
}



TypeDescriptor * FUN_180004ec0(void)

{
  return &`public:_class_RC::SignatureContainer___cdecl_`public:_void___cdecl_RC::AllowModsMod::patch_delegate(void)___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



TypeDescriptor * FUN_180004ed0(void)

{
  return &`public:_class_RC::SignatureContainer___cdecl_`public:_void___cdecl_RC::AllowModsMod::patch_delegate(void)___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::<lambda_2>::RTTI_Type_Descriptor;
}



void FUN_180004ee0(void)

{
  undefined8 local_28 [5];
  
  thunk_FUN_180003c20(local_28);
                    // WARNING: Subroutine does not return
  _CxxThrowException(local_28,(ThrowInfo *)&DAT_18000f2f8);
}



void FUN_180004f10(longlong *param_1)

{
  SignatureData *pSVar1;
  void *pvVar2;
  SignatureData *this;
  void *pvVar3;
  
  this = (SignatureData *)*param_1;
  if (this != (SignatureData *)0x0) {
    pSVar1 = (SignatureData *)param_1[1];
    for (; this != pSVar1; this = this + 0x48) {
      RC::SignatureData::~SignatureData(this);
    }
    pvVar2 = (void *)*param_1;
    pvVar3 = pvVar2;
    if ((0xfff < (ulonglong)(((param_1[2] - (longlong)pvVar2) / 0x48) * 0x48)) &&
       (pvVar3 = *(void **)((longlong)pvVar2 + -8),
       0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)pvVar3)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_18000128f(pvVar3);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}



void FUN_180004f29(longlong param_1)

{
  SignatureData *pSVar1;
  void *pvVar2;
  SignatureData *unaff_RBX;
  longlong *unaff_RSI;
  void *pvVar3;
  
  pSVar1 = *(SignatureData **)(param_1 + 8);
  if (unaff_RBX != pSVar1) {
    do {
      RC::SignatureData::~SignatureData(unaff_RBX);
      unaff_RBX = unaff_RBX + 0x48;
    } while (unaff_RBX != pSVar1);
  }
  pvVar2 = (void *)*unaff_RSI;
  pvVar3 = pvVar2;
  if ((0xfff < (ulonglong)(((unaff_RSI[2] - (longlong)pvVar2) / 0x48) * 0x48)) &&
     (pvVar3 = *(void **)((longlong)pvVar2 + -8),
     0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)pvVar3)))) {
                    // WARNING: Subroutine does not return
    _invalid_parameter_noinfo_noreturn();
  }
  FUN_18000128f(pvVar3);
  *unaff_RSI = 0;
  unaff_RSI[1] = 0;
  unaff_RSI[2] = 0;
  return;
}



void FUN_180004f84(undefined8 param_1,longlong param_2,longlong param_3)

{
  undefined8 *unaff_RSI;
  
  if ((param_3 - (longlong)*(void **)(param_3 + -8)) - 8U < 0x20) {
    FUN_18000128f(*(void **)(param_3 + -8));
    *unaff_RSI = 0;
    unaff_RSI[1] = 0;
    unaff_RSI[2] = 0;
    return;
  }
                    // WARNING: Subroutine does not return
  _invalid_parameter_noinfo_noreturn();
}



void FUN_180004ff0(longlong *param_1)

{
  longlong *plVar1;
  void *pvVar2;
  longlong *plVar3;
  void *pvVar4;
  
  plVar3 = (longlong *)*param_1;
  if (plVar3 != (longlong *)0x0) {
    plVar1 = (longlong *)param_1[1];
    for (; plVar3 != plVar1; plVar3 = plVar3 + 0x1b) {
      thunk_FUN_180004140(plVar3);
    }
    pvVar2 = (void *)*param_1;
    pvVar4 = pvVar2;
    if ((0xfff < (ulonglong)(((param_1[2] - (longlong)pvVar2) / 0xd8) * 0xd8)) &&
       (pvVar4 = *(void **)((longlong)pvVar2 + -8),
       0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)pvVar4)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_18000128f(pvVar4);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}



void FUN_180005009(longlong param_1)

{
  longlong *plVar1;
  void *pvVar2;
  longlong *unaff_RBX;
  longlong *unaff_RDI;
  void *pvVar3;
  
  plVar1 = *(longlong **)(param_1 + 8);
  if (unaff_RBX != plVar1) {
    do {
      thunk_FUN_180004140(unaff_RBX);
      unaff_RBX = unaff_RBX + 0x1b;
    } while (unaff_RBX != plVar1);
  }
  pvVar2 = (void *)*unaff_RDI;
  pvVar3 = pvVar2;
  if ((0xfff < (ulonglong)(((unaff_RDI[2] - (longlong)pvVar2) / 0xd8) * 0xd8)) &&
     (pvVar3 = *(void **)((longlong)pvVar2 + -8),
     0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)pvVar3)))) {
                    // WARNING: Subroutine does not return
    _invalid_parameter_noinfo_noreturn();
  }
  FUN_18000128f(pvVar3);
  *unaff_RDI = 0;
  unaff_RDI[1] = 0;
  unaff_RDI[2] = 0;
  return;
}



void FUN_180005065(undefined8 param_1,longlong param_2,longlong param_3)

{
  undefined8 *unaff_RDI;
  
  if ((param_3 - (longlong)*(void **)(param_3 + -8)) - 8U < 0x20) {
    FUN_18000128f(*(void **)(param_3 + -8));
    *unaff_RDI = 0;
    unaff_RDI[1] = 0;
    unaff_RDI[2] = 0;
    return;
  }
                    // WARNING: Subroutine does not return
  _invalid_parameter_noinfo_noreturn();
}



void FUN_1800050e0(void)

{
  code *pcVar1;
  
  std::_Xlength_error("string too long");
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



void FUN_180005100(void)

{
  code *pcVar1;
  
  std::_Xlength_error("vector too long");
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



void FUN_180005120(void)

{
  code *pcVar1;
  
  std::_Xlength_error("vector too long");
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



void FUN_180005140(void)

{
  code *pcVar1;
  
  std::_Xlength_error("vector too long");
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



void * FUN_180005160(undefined8 param_1,ulonglong param_2)

{
  code *pcVar1;
  void *pvVar2;
  void *pvVar3;
  
  if (param_2 < 0x1000) {
    if (param_2 != 0) {
      pvVar2 = operator_new(param_2);
      return pvVar2;
    }
    return (void *)0x0;
  }
  if (param_2 < param_2 + 0x27) {
    pvVar2 = operator_new(param_2 + 0x27);
    if (pvVar2 != (void *)0x0) {
      pvVar3 = (void *)((longlong)pvVar2 + 0x27U & 0xffffffffffffffe0);
      *(void **)((longlong)pvVar3 + -8) = pvVar2;
      return pvVar3;
    }
                    // WARNING: Subroutine does not return
    _invalid_parameter_noinfo_noreturn();
  }
  thunk_FUN_180004ee0();
  pcVar1 = (code *)swi(3);
  pvVar2 = (void *)(*pcVar1)();
  return pvVar2;
}



void * FUN_1800051d0(undefined8 param_1,ulonglong param_2)

{
  code *pcVar1;
  void *pvVar2;
  void *pvVar3;
  __uint64 _Var4;
  
  if (param_2 < 0x12f684bda12f685) {
    _Var4 = param_2 * 0xd8;
    if (_Var4 < 0x1000) {
      if (_Var4 != 0) {
        pvVar2 = operator_new(_Var4);
        return pvVar2;
      }
      return (void *)0x0;
    }
    if (_Var4 < _Var4 + 0x27) {
      pvVar2 = operator_new(_Var4 + 0x27);
      if (pvVar2 != (void *)0x0) {
        pvVar3 = (void *)((longlong)pvVar2 + 0x27U & 0xffffffffffffffe0);
        *(void **)((longlong)pvVar3 + -8) = pvVar2;
        return pvVar3;
      }
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
  }
  thunk_FUN_180004ee0();
  pcVar1 = (code *)swi(3);
  pvVar2 = (void *)(*pcVar1)();
  return pvVar2;
}



void * FUN_180005260(undefined8 param_1,ulonglong param_2)

{
  code *pcVar1;
  ulonglong uVar2;
  void *pvVar3;
  void *pvVar4;
  
  if (param_2 < 0x8000000000000000) {
    uVar2 = param_2 * 2;
    if (uVar2 < 0x1000) {
      if (uVar2 != 0) {
        pvVar3 = operator_new(uVar2);
        return pvVar3;
      }
      return (void *)0x0;
    }
    if (uVar2 < uVar2 + 0x27) {
      pvVar3 = operator_new(uVar2 + 0x27);
      if (pvVar3 != (void *)0x0) {
        pvVar4 = (void *)((longlong)pvVar3 + 0x27U & 0xffffffffffffffe0);
        *(void **)((longlong)pvVar4 + -8) = pvVar3;
        return pvVar4;
      }
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
  }
  thunk_FUN_180004ee0();
  pcVar1 = (code *)swi(3);
  pvVar3 = (void *)(*pcVar1)();
  return pvVar3;
}



longlong * FUN_1800052f0(longlong *param_1,void *param_2,ulonglong param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  void *pvVar3;
  code *pcVar4;
  void *_Dst;
  longlong *plVar5;
  ulonglong uVar6;
  void *pvVar7;
  ulonglong uVar8;
  
  uVar2 = param_1[3];
  if (uVar2 < param_3) {
    if (0x7ffffffffffffffe < param_3) {
      thunk_FUN_1800050e0();
      pcVar4 = (code *)swi(3);
      plVar5 = (longlong *)(*pcVar4)();
      return plVar5;
    }
    uVar6 = param_3 | 7;
    uVar8 = 0x7ffffffffffffffe;
    if (((uVar6 < 0x7fffffffffffffff) && (uVar2 <= 0x7ffffffffffffffe - (uVar2 >> 1))) &&
       (uVar1 = (uVar2 >> 1) + uVar2, uVar8 = uVar6, uVar6 < uVar1)) {
      uVar8 = uVar1;
    }
    _Dst = thunk_FUN_180005260(param_1,uVar8 + 1);
    param_1[3] = uVar8;
    param_1[2] = param_3;
    memcpy(_Dst,param_2,param_3 * 2);
    *(undefined2 *)(param_3 * 2 + (longlong)_Dst) = 0;
    if (7 < uVar2) {
      pvVar3 = (void *)*param_1;
      pvVar7 = pvVar3;
      if ((0xfff < uVar2 * 2 + 2) &&
         (pvVar7 = *(void **)((longlong)pvVar3 + -8),
         0x1f < (ulonglong)((longlong)pvVar3 + (-8 - (longlong)pvVar7)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_18000128f(pvVar7);
    }
    *param_1 = (longlong)_Dst;
  }
  else {
    plVar5 = param_1;
    if (7 < uVar2) {
      plVar5 = (longlong *)*param_1;
    }
    param_1[2] = param_3;
    memmove(plVar5,param_2,param_3 * 2);
    *(undefined2 *)(param_3 * 2 + (longlong)plVar5) = 0;
  }
  return param_1;
}



void FUN_180005460(undefined8 param_1,void *param_2,longlong param_3)

{
  void *pvVar1;
  
  pvVar1 = param_2;
  if ((0xfff < (ulonglong)(param_3 * 0xd8)) &&
     (pvVar1 = *(void **)((longlong)param_2 + -8),
     0x1f < (ulonglong)((longlong)param_2 + (-8 - (longlong)pvVar1)))) {
                    // WARNING: Subroutine does not return
    _invalid_parameter_noinfo_noreturn();
  }
  FUN_18000128f(pvVar1);
  return;
}



void FUN_1800054c0(void)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  void *pvVar5;
  longlong *plVar6;
  undefined1 auStack_1a8 [32];
  undefined1 local_188 [4];
  undefined4 local_184;
  longlong *local_180;
  longlong *plStack_178;
  longlong local_170;
  float local_168 [2];
  undefined8 *local_160;
  undefined8 local_158;
  void *local_150;
  undefined8 local_148;
  longlong lStack_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 *local_118;
  undefined1 *local_110;
  undefined8 *local_108;
  longlong local_f8 [3];
  longlong local_e0 [7];
  longlong *local_a8;
  longlong local_a0 [7];
  longlong *local_68;
  void *local_58;
  undefined8 local_50;
  longlong local_48;
  ulonglong local_18;
  
  local_18 = DAT_180010028 ^ (ulonglong)auStack_1a8;
  local_128 = 0;
  local_188[0] = 0;
  local_120 = 0;
  local_118 = &local_128;
  local_110 = local_188;
  local_108 = &local_120;
  FUN_1800042a0(&local_118,local_f8);
  local_180 = (longlong *)0x0;
  plStack_178 = (longlong *)0x0;
  local_170 = 0;
  thunk_FUN_180002b40((longlong *)&local_180,(longlong *)0x0,local_f8);
  local_168[0] = 0.0;
  local_160 = (undefined8 *)0x0;
  local_158 = 0;
  local_160 = (undefined8 *)operator_new(0x30);
  *local_160 = local_160;
  local_160[1] = local_160;
  local_150 = (void *)0x0;
  local_148 = 0;
  lStack_140 = 0;
  local_138 = 7;
  local_130 = 8;
  local_168[0] = 1.0;
  thunk_FUN_180004760((longlong *)&local_150,0x10,local_160);
  local_184 = 0x1f;
  thunk_FUN_180003350(local_168,&local_118,(byte *)&local_184,(longlong *)&local_180);
  uVar1 = *(undefined4 *)m_num_threads_exref;
  *(undefined4 *)m_num_threads_exref = 1;
  RC::SinglePassScanner::start_scan((unordered_map<> *)local_168);
  *(undefined4 *)m_num_threads_exref = uVar1;
  if (local_150 != (void *)0x0) {
    pvVar5 = local_150;
    if ((0xfff < (ulonglong)((lStack_140 - (longlong)local_150 >> 3) * 8)) &&
       (pvVar5 = *(void **)((longlong)local_150 + -8),
       0x1f < (ulonglong)((longlong)local_150 + (-8 - (longlong)pvVar5)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_18000128f(pvVar5);
    local_150 = (void *)0x0;
    local_148 = 0;
    lStack_140 = 0;
  }
  *(undefined8 *)local_160[1] = 0;
  puVar3 = (undefined8 *)*local_160;
  while (puVar3 != (undefined8 *)0x0) {
    puVar2 = (undefined8 *)*puVar3;
    thunk_FUN_180004ff0(puVar3 + 3);
    FUN_18000128f(puVar3);
    puVar3 = puVar2;
  }
  FUN_18000128f(local_160);
  plVar4 = plStack_178;
  plVar6 = local_180;
  if (local_180 != (longlong *)0x0) {
    for (; plVar6 != plVar4; plVar6 = plVar6 + 0x1b) {
      thunk_FUN_180004140(plVar6);
    }
    plVar6 = local_180;
    if ((0xfff < (ulonglong)(((local_170 - (longlong)local_180) / 0xd8) * 0xd8)) &&
       (plVar6 = (longlong *)local_180[-1],
       0x1f < (ulonglong)((longlong)local_180 + (-8 - (longlong)plVar6)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_18000128f(plVar6);
    local_180 = (longlong *)0x0;
    plStack_178 = (longlong *)0x0;
    local_170 = 0;
  }
  if (local_58 != (void *)0x0) {
    pvVar5 = local_58;
    if ((0xfff < (local_48 - (longlong)local_58 & 0xfffffffffffffff0U)) &&
       (pvVar5 = *(void **)((longlong)local_58 + -8),
       0x1f < (ulonglong)((longlong)local_58 + (-8 - (longlong)pvVar5)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_18000128f(pvVar5);
    local_58 = (void *)0x0;
    local_50 = 0;
    local_48 = 0;
  }
  if (local_68 != (longlong *)0x0) {
    (**(code **)(*local_68 + 0x20))
              (local_68,CONCAT71((int7)((ulonglong)local_a0 >> 8),local_68 != local_a0));
    local_68 = (longlong *)0x0;
  }
  if (local_a8 != (longlong *)0x0) {
    (**(code **)(*local_a8 + 0x20))
              (local_a8,CONCAT71((int7)((ulonglong)local_e0 >> 8),local_a8 != local_e0));
    local_a8 = (longlong *)0x0;
  }
  thunk_FUN_180004f10(local_f8);
  thunk_FUN_1800062a0(local_18 ^ (ulonglong)auStack_1a8);
  return;
}



char * FUN_1800058a0(longlong param_1)

{
  char *pcVar1;
  
  pcVar1 = "Unknown exception";
  if (*(char **)(param_1 + 8) != (char *)0x0) {
    pcVar1 = *(char **)(param_1 + 8);
  }
  return pcVar1;
}



CppUserModBase * FUN_1800058c0(void)

{
  CppUserModBase *this;
  wchar_t *local_18;
  undefined8 uStack_10;
  
  this = (CppUserModBase *)operator_new(0xc0);
  if (this != (CppUserModBase *)0x0) {
    RC::CppUserModBase::CppUserModBase(this);
    *(undefined ***)this = RC::AllowModsMod::vftable;
    thunk_FUN_1800052f0((longlong *)(this + 0x40),&DAT_18000cad0,3);
    thunk_FUN_1800052f0((longlong *)(this + 0x20),L"AllowModsMod",0xc);
    thunk_FUN_1800052f0((longlong *)(this + 0x80),L"Narknon + Truman",0x10);
    thunk_FUN_1800052f0((longlong *)(this + 0x60),L"Allows asset mods to load in PAYDAY 3",0x25);
    local_18 = L"[AllowModsMod]: Init.\n";
    uStack_10 = 0x16;
    thunk_FUN_1800037b0((undefined4 *)&local_18);
    thunk_FUN_1800054c0();
    return this;
  }
  return (CppUserModBase *)0x0;
}



void FUN_1800059c0(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
                    // WARNING: Could not recover jumptable at 0x0001800059cd. Too many branches
                    // WARNING: Treating indirect jump as call
    (**(code **)*param_1)(param_1,1);
    return;
  }
  return;
}



void __thiscall RC::CppUserModBase::on_update(CppUserModBase *this)

{
                    // WARNING: Could not recover jumptable at 0x0001800059f9. Too many branches
                    // WARNING: Treating indirect jump as call
  on_update(this);
  return;
}



void __thiscall RC::CppUserModBase::on_unreal_init(CppUserModBase *this)

{
                    // WARNING: Could not recover jumptable at 0x0001800059ff. Too many branches
                    // WARNING: Treating indirect jump as call
  on_unreal_init(this);
  return;
}



void __thiscall RC::CppUserModBase::on_program_start(CppUserModBase *this)

{
                    // WARNING: Could not recover jumptable at 0x000180005a05. Too many branches
                    // WARNING: Treating indirect jump as call
  on_program_start(this);
  return;
}



void __thiscall RC::CppUserModBase::on_lua_start(void)

{
                    // WARNING: Could not recover jumptable at 0x000180005a0b. Too many branches
                    // WARNING: Treating indirect jump as call
  on_lua_start();
  return;
}



void __thiscall
RC::CppUserModBase::on_lua_start
          (CppUserModBase *this,Lua *param_1,Lua *param_2,Lua *param_3,vector<> *param_4)

{
                    // WARNING: Could not recover jumptable at 0x000180005a11. Too many branches
                    // WARNING: Treating indirect jump as call
  on_lua_start(this,param_1,param_2,param_3,param_4);
  return;
}



void __thiscall RC::CppUserModBase::on_lua_stop(void)

{
                    // WARNING: Could not recover jumptable at 0x000180005a17. Too many branches
                    // WARNING: Treating indirect jump as call
  on_lua_stop();
  return;
}



void __thiscall
RC::CppUserModBase::on_lua_stop
          (CppUserModBase *this,Lua *param_1,Lua *param_2,Lua *param_3,vector<> *param_4)

{
                    // WARNING: Could not recover jumptable at 0x000180005a1d. Too many branches
                    // WARNING: Treating indirect jump as call
  on_lua_stop(this,param_1,param_2,param_3,param_4);
  return;
}



void __thiscall RC::CppUserModBase::on_dll_load(void)

{
                    // WARNING: Could not recover jumptable at 0x000180005a23. Too many branches
                    // WARNING: Treating indirect jump as call
  on_dll_load();
  return;
}



void __thiscall RC::CppUserModBase::render_tab(CppUserModBase *this)

{
                    // WARNING: Could not recover jumptable at 0x000180005a29. Too many branches
                    // WARNING: Treating indirect jump as call
  render_tab(this);
  return;
}



void __cdecl std::_Xbad_alloc(void)

{
                    // WARNING: Could not recover jumptable at 0x000180005a2f. Too many branches
                    // WARNING: Treating indirect jump as call
  _Xbad_alloc();
  return;
}



void __cdecl std::_Xlength_error(char *param_1)

{
                    // WARNING: Could not recover jumptable at 0x000180005a35. Too many branches
                    // WARNING: Treating indirect jump as call
  _Xlength_error(param_1);
  return;
}



// WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall
// Library Function - Single Match
//  void __cdecl `eh vector destructor iterator'(void * __ptr64,unsigned __int64,unsigned
// __int64,void (__cdecl*)(void * __ptr64))
// 
// Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release

void __cdecl
_eh_vector_destructor_iterator_
          (void *param_1,__uint64 param_2,__uint64 param_3,_func_void_void_ptr *param_4)

{
  void *pvVar1;
  
  pvVar1 = (void *)(param_2 * param_3 + (longlong)param_1);
  while( true ) {
    if (param_3 == 0) break;
    pvVar1 = (void *)((longlong)pvVar1 - param_2);
    (*param_4)(pvVar1);
    param_3 = param_3 - 1;
  }
  return;
}



void FUN_180005adc(void *param_1,__uint64 param_2,int param_3,_func_void_void_ptr *param_4)

{
  _eh_vector_destructor_iterator_(param_1,param_2,(longlong)param_3,param_4);
  return;
}



undefined8 FUN_180005ae8(undefined8 *param_1)

{
  int *piVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  piVar1 = (int *)*param_1;
  if (*piVar1 != -0x1f928c9d) {
    return 0;
  }
  puVar3 = (undefined8 *)__current_exception();
  *puVar3 = piVar1;
  uVar2 = param_1[1];
  puVar3 = (undefined8 *)__current_exception_context();
  *puVar3 = uVar2;
                    // WARNING: Subroutine does not return
  terminate();
}



// WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall
// Library Function - Single Match
//  void __cdecl __ArrayUnwind(void * __ptr64,unsigned __int64,unsigned __int64,void (__cdecl*)(void
// * __ptr64))
// 
// Library: Visual Studio 2019 Release

void __cdecl
__ArrayUnwind(void *param_1,__uint64 param_2,__uint64 param_3,_func_void_void_ptr *param_4)

{
  __uint64 _Var1;
  
  for (_Var1 = 0; _Var1 != param_3; _Var1 = _Var1 + 1) {
    param_1 = (void *)((longlong)param_1 - param_2);
    (*param_4)(param_1);
  }
  return;
}



// Library Function - Single Match
//  void * __ptr64 __cdecl operator new(unsigned __int64)
// 
// Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release

void * __cdecl operator_new(__uint64 param_1)

{
  code *pcVar1;
  int iVar2;
  void *pvVar3;
  
  do {
    pvVar3 = malloc(param_1);
    if (pvVar3 != (void *)0x0) {
      return pvVar3;
    }
    iVar2 = _callnewh(param_1);
  } while (iVar2 != 0);
  if (param_1 == 0xffffffffffffffff) {
    thunk_FUN_180006b18();
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  thunk_FUN_180006af0();
  pcVar1 = (code *)swi(3);
  pvVar3 = (void *)(*pcVar1)();
  return pvVar3;
}



void FUN_180005c00(void *param_1)

{
                    // WARNING: Could not recover jumptable at 0x0001800078a4. Too many branches
                    // WARNING: Treating indirect jump as call
  free(param_1);
  return;
}



void FUN_180005c08(void)

{
  ulonglong uVar1;
  
  uVar1 = thunk_FUN_180006d60();
  _configure_narrow_argv(uVar1 & 0xffffffff);
  return;
}



void _initialize_narrow_environment(void)

{
  _initialize_narrow_environment();
  return;
}



void ** FUN_180005cc4(void)

{
  return &ExceptionList;
}



// Library Function - Single Match
//  __scrt_acquire_startup_lock
// 
// Library: Visual Studio 2019 Release

ulonglong __scrt_acquire_startup_lock(void)

{
  void *pvVar1;
  bool bVar2;
  undefined7 extraout_var;
  ulonglong uVar4;
  void *pvVar3;
  
  bVar2 = __scrt_is_ucrt_dll_in_use();
  pvVar3 = (void *)CONCAT71(extraout_var,bVar2);
  if ((int)pvVar3 == 0) {
LAB_180005cfe:
    uVar4 = (ulonglong)pvVar3 & 0xffffffffffffff00;
  }
  else {
    do {
      pvVar3 = (void *)0x0;
      LOCK();
      bVar2 = DAT_180010860 == (void *)0x0;
      pvVar1 = StackBase;
      if (!bVar2) {
        pvVar3 = DAT_180010860;
        pvVar1 = DAT_180010860;
      }
      DAT_180010860 = pvVar1;
      UNLOCK();
      if (bVar2) goto LAB_180005cfe;
    } while (StackBase != pvVar3);
    uVar4 = CONCAT71((int7)((ulonglong)pvVar3 >> 8),1);
  }
  return uVar4;
}



// Library Function - Single Match
//  __scrt_dllmain_after_initialize_c
// 
// Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release

undefined8 __scrt_dllmain_after_initialize_c(void)

{
  bool bVar1;
  undefined7 extraout_var;
  undefined8 uVar2;
  ulonglong uVar3;
  
  bVar1 = __scrt_is_ucrt_dll_in_use();
  if ((int)CONCAT71(extraout_var,bVar1) == 0) {
    uVar3 = thunk_FUN_180006d60();
    uVar3 = _configure_narrow_argv(uVar3 & 0xffffffff);
    if ((int)uVar3 != 0) {
      return uVar3 & 0xffffffffffffff00;
    }
    uVar2 = _initialize_narrow_environment();
  }
  else {
    uVar2 = thunk_FUN_180006b48();
  }
  return CONCAT71((int7)((ulonglong)uVar2 >> 8),1);
}



// Library Function - Single Match
//  __scrt_dllmain_before_initialize_c
// 
// Library: Visual Studio 2019 Release

bool __scrt_dllmain_before_initialize_c(void)

{
  undefined8 uVar1;
  
  uVar1 = __scrt_initialize_onexit_tables(0);
  return (char)uVar1 != '\0';
}



undefined1 FUN_180005d78(void)

{
  char cVar1;
  
  cVar1 = thunk_FUN_1800078b0();
  if (cVar1 != '\0') {
    cVar1 = thunk_FUN_1800078b0();
    if (cVar1 != '\0') {
      return 1;
    }
    thunk_FUN_1800078b4();
  }
  return 0;
}



undefined1 FUN_180005dac(void)

{
  thunk_FUN_1800078b4();
  thunk_FUN_1800078b4();
  return 1;
}



// WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall
// Library Function - Single Match
//  __scrt_dllmain_exception_filter
// 
// Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release

void __scrt_dllmain_exception_filter
               (undefined8 param_1,int param_2,undefined8 param_3,undefined *param_4,
               undefined4 param_5,undefined8 param_6)

{
  bool bVar1;
  undefined7 extraout_var;
  
  bVar1 = __scrt_is_ucrt_dll_in_use();
  if (((int)CONCAT71(extraout_var,bVar1) == 0) && (param_2 == 1)) {
    (*(code *)param_4)(param_1,0,param_3);
  }
  _seh_filter_dll(param_5,param_6);
  return;
}



// Library Function - Single Match
//  __scrt_dllmain_uninitialize_c
// 
// Library: Visual Studio 2019 Release

void __scrt_dllmain_uninitialize_c(void)

{
  bool bVar1;
  undefined7 extraout_var;
  undefined8 uVar2;
  
  bVar1 = __scrt_is_ucrt_dll_in_use();
  if ((int)CONCAT71(extraout_var,bVar1) != 0) {
    _execute_onexit_table(&DAT_180010870);
    return;
  }
  uVar2 = thunk_FUN_1800078c0();
  if ((int)uVar2 == 0) {
    _cexit();
  }
  return;
}



// Library Function - Single Match
//  __scrt_dllmain_uninitialize_critical
// 
// Library: Visual Studio 2019 Release

void __scrt_dllmain_uninitialize_critical(void)

{
  FUN_18000116d();
  thunk_FUN_1800078bc();
  return;
}



// Library Function - Single Match
//  __scrt_initialize_crt
// 
// Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release

longlong __scrt_initialize_crt(int param_1)

{
  char cVar1;
  uint7 extraout_var;
  uint7 uVar2;
  undefined7 extraout_var_00;
  uint7 extraout_var_01;
  
  if (param_1 == 0) {
    DAT_180010868 = 1;
  }
  thunk_FUN_180006b48();
  cVar1 = thunk_FUN_1800078ac();
  uVar2 = extraout_var;
  if (cVar1 != '\0') {
    cVar1 = thunk_FUN_1800078ac();
    if (cVar1 != '\0') {
      return CONCAT71(extraout_var_00,1);
    }
    thunk_FUN_1800078b8();
    uVar2 = extraout_var_01;
  }
  return (ulonglong)uVar2 << 8;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Library Function - Single Match
//  __scrt_initialize_onexit_tables
// 
// Library: Visual Studio 2019 Release

undefined8 __scrt_initialize_onexit_tables(uint param_1)

{
  code *pcVar1;
  bool bVar2;
  ulonglong in_RAX;
  undefined7 extraout_var;
  undefined8 uVar3;
  
  if (DAT_180010869 == '\0') {
    if (1 < param_1) {
      thunk_FUN_180006d84(5);
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
    bVar2 = __scrt_is_ucrt_dll_in_use();
    if (((int)CONCAT71(extraout_var,bVar2) == 0) || (param_1 != 0)) {
      in_RAX = 0xffffffffffffffff;
      DAT_180010870 = 0xffffffffffffffff;
      uRam0000000180010878 = 0xffffffffffffffff;
      _DAT_180010880 = 0xffffffffffffffff;
      DAT_180010888 = 0xffffffffffffffff;
      uRam0000000180010890 = 0xffffffffffffffff;
      _DAT_180010898 = 0xffffffffffffffff;
    }
    else {
      in_RAX = _initialize_onexit_table(&DAT_180010870);
      if (((int)in_RAX != 0) ||
         (in_RAX = _initialize_onexit_table(&DAT_180010888), (int)in_RAX != 0)) {
        return in_RAX & 0xffffffffffffff00;
      }
    }
    DAT_180010869 = '\x01';
  }
  return CONCAT71((int7)(in_RAX >> 8),1);
}



// WARNING: Removing unreachable block (ram,0x000180006031)
// WARNING: Enum "SectionFlags": Some values do not have unique names

ulonglong FUN_180005fa4(longlong param_1)

{
  ulonglong uVar1;
  uint7 uVar2;
  IMAGE_SECTION_HEADER *pIVar3;
  
  uVar1 = 0;
  for (pIVar3 = &IMAGE_SECTION_HEADER_180000208; pIVar3 != (IMAGE_SECTION_HEADER *)&DAT_180000320;
      pIVar3 = pIVar3 + 1) {
    if (((ulonglong)(uint)pIVar3->VirtualAddress <= param_1 - 0x180000000U) &&
       (uVar1 = (ulonglong)((pIVar3->Misc).PhysicalAddress + pIVar3->VirtualAddress),
       param_1 - 0x180000000U < uVar1)) goto LAB_18000601a;
  }
  pIVar3 = (IMAGE_SECTION_HEADER *)0x0;
LAB_18000601a:
  if (pIVar3 == (IMAGE_SECTION_HEADER *)0x0) {
    uVar1 = uVar1 & 0xffffffffffffff00;
  }
  else {
    uVar2 = (uint7)(uVar1 >> 8);
    if ((int)pIVar3->Characteristics < 0) {
      uVar1 = (ulonglong)uVar2 << 8;
    }
    else {
      uVar1 = CONCAT71(uVar2,1);
    }
  }
  return uVar1;
}



// Library Function - Single Match
//  __scrt_release_startup_lock
// 
// Library: Visual Studio 2019 Release

void __scrt_release_startup_lock(char param_1)

{
  bool bVar1;
  undefined3 extraout_var;
  
  bVar1 = __scrt_is_ucrt_dll_in_use();
  if ((CONCAT31(extraout_var,bVar1) != 0) && (param_1 == '\0')) {
    LOCK();
    DAT_180010860 = 0;
    UNLOCK();
  }
  return;
}



// Library Function - Single Match
//  __scrt_uninitialize_crt
// 
// Library: Visual Studio 2019 Release

undefined1 __scrt_uninitialize_crt(undefined8 param_1,char param_2)

{
  if ((DAT_180010868 == '\0') || (param_2 == '\0')) {
    thunk_FUN_1800078b8();
    thunk_FUN_1800078b8();
  }
  return 1;
}



// Library Function - Single Match
//  _onexit
// 
// Library: Visual Studio 2019 Release

_onexit_t __cdecl _onexit(_onexit_t _Func)

{
  int iVar1;
  _onexit_t p_Var2;
  
  if (DAT_180010870 == -1) {
    iVar1 = _crt_atexit();
  }
  else {
    iVar1 = _register_onexit_function(&DAT_180010870);
  }
  p_Var2 = (_onexit_t)0x0;
  if (iVar1 == 0) {
    p_Var2 = _Func;
  }
  return p_Var2;
}



void FUN_180006110(undefined8 param_1)

{
  if (DAT_180010888 != -1) {
    _register_onexit_function(&DAT_180010888,param_1);
    return;
  }
                    // WARNING: Could not recover jumptable at 0x00018000788c. Too many branches
                    // WARNING: Treating indirect jump as call
  _crt_at_quick_exit();
  return;
}



// Library Function - Single Match
//  atexit
// 
// Library: Visual Studio 2019 Release

int __cdecl atexit(_func_5014 *param_1)

{
  _onexit_t p_Var1;
  
  p_Var1 = _onexit((_onexit_t)param_1);
  return (p_Var1 != (_onexit_t)0x0) - 1;
}



// Library Function - Single Match
//  __GSHandlerCheck
// 
// Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release

undefined8
__GSHandlerCheck(undefined8 param_1,ulonglong param_2,undefined8 param_3,longlong param_4)

{
  __GSHandlerCheckCommon(param_2,param_4,*(uint **)(param_4 + 0x38));
  return 1;
}



// Library Function - Single Match
//  __GSHandlerCheckCommon
// 
// Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release

void __GSHandlerCheckCommon(ulonglong param_1,longlong param_2,uint *param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar2 = param_1;
  if ((*param_3 & 4) != 0) {
    uVar2 = (longlong)(int)param_3[1] + param_1 & (longlong)(int)-param_3[2];
  }
  uVar1 = (ulonglong)*(uint *)(*(longlong *)(param_2 + 0x10) + 8);
  if ((*(byte *)(uVar1 + 3 + *(longlong *)(param_2 + 8)) & 0xf) != 0) {
    param_1 = param_1 + (*(byte *)(uVar1 + 3 + *(longlong *)(param_2 + 8)) & 0xfffffff0);
  }
  thunk_FUN_1800062a0(param_1 ^ *(ulonglong *)((longlong)(int)(*param_3 & 0xfffffff8) + uVar2));
  return;
}



// Library Function - Multiple Matches With Different Base Names
//  __GSHandlerCheck_EH
//  __GSHandlerCheck_EH4
// 
// Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release

void FID_conflict___GSHandlerCheck_EH
               (longlong param_1,ulonglong param_2,undefined8 param_3,longlong param_4)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_4 + 0x38);
  __GSHandlerCheckCommon(param_2,param_4,(uint *)(lVar1 + 4));
  if ((*(uint *)(lVar1 + 4) & ((*(uint *)(param_1 + 4) & 0x66) != 0) + 1) != 0) {
    __CxxFrameHandler4(param_1,param_2,param_3,param_4);
  }
  return;
}



void FUN_1800062a0(longlong param_1)

{
  if ((param_1 == DAT_180010028) && ((short)((ulonglong)param_1 >> 0x30) == 0)) {
    return;
  }
  thunk_FUN_1800070b0();
  return;
}



void FUN_1800062cc(undefined8 *param_1)

{
  *param_1 = type_info::vftable;
  return;
}



undefined8 * FUN_1800062dc(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = type_info::vftable;
  if ((param_2 & 1) != 0) {
    FUN_18000128f(param_1);
  }
  return param_1;
}



ulonglong FUN_180006314(undefined8 param_1,int param_2,longlong param_3)

{
  byte bVar1;
  int iVar2;
  ulonglong uVar3;
  undefined4 extraout_var;
  
  if (param_2 == 0) {
    iVar2 = dllmain_crt_process_detach(param_3 != 0);
    return CONCAT44(extraout_var,iVar2);
  }
  if (param_2 != 1) {
    if (param_2 == 2) {
      bVar1 = thunk_FUN_180005d78();
    }
    else {
      if (param_2 != 3) {
        return 1;
      }
      bVar1 = thunk_FUN_180005dac();
    }
    return (ulonglong)bVar1;
  }
  uVar3 = FUN_180006378(param_1,param_3);
  return uVar3;
}



// WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall

undefined8 FUN_180006378(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong *plVar7;
  ulonglong uVar8;
  
  uVar5 = __scrt_initialize_crt(0);
  if ((char)uVar5 != '\0') {
    uVar5 = __scrt_acquire_startup_lock();
    bVar2 = true;
    if (DAT_180010858 != 0) {
      thunk_FUN_180006d84(7);
      pcVar1 = (code *)swi(3);
      uVar5 = (*pcVar1)();
      return uVar5;
    }
    DAT_180010858 = 1;
    bVar3 = __scrt_dllmain_before_initialize_c();
    if (bVar3) {
      thunk_FUN_1800076f8();
      thunk_FUN_18000768c();
      thunk_FUN_1800076c8();
      iVar4 = _initterm_e(&DAT_18000c330,&DAT_18000c440);
      if ((iVar4 == 0) && (uVar6 = __scrt_dllmain_after_initialize_c(), (char)uVar6 != '\0')) {
        _initterm(&DAT_18000c000,&DAT_18000c220);
        DAT_180010858 = 2;
        bVar2 = false;
      }
    }
    __scrt_release_startup_lock((char)uVar5);
    if (!bVar2) {
      plVar7 = (longlong *)thunk_FUN_1800076ec();
      if ((*plVar7 != 0) && (uVar8 = thunk_FUN_180005fa4((longlong)plVar7), (char)uVar8 != '\0')) {
        (*(code *)*plVar7)(param_1,2,param_2,_guard_dispatch_icall);
      }
      DAT_1800108b0 = DAT_1800108b0 + 1;
      return 1;
    }
  }
  return 0;
}



// Library Function - Single Match
//  int __cdecl dllmain_crt_process_detach(bool)
// 
// Library: Visual Studio 2019 Release

int __cdecl dllmain_crt_process_detach(bool param_1)

{
  code *pcVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  undefined8 uVar5;
  undefined7 in_register_00000009;
  
  if (DAT_1800108b0 < 1) {
    uVar3 = 0;
  }
  else {
    DAT_1800108b0 = DAT_1800108b0 + -1;
    uVar5 = __scrt_acquire_startup_lock();
    if (DAT_180010858 != 2) {
      thunk_FUN_180006d84(7);
      pcVar1 = (code *)swi(3);
      iVar4 = (*pcVar1)();
      return iVar4;
    }
    __scrt_dllmain_uninitialize_c();
    thunk_FUN_1800076a0();
    _RTC_Terminate();
    DAT_180010858 = 0;
    __scrt_release_startup_lock((char)uVar5);
    cVar2 = __scrt_uninitialize_crt(CONCAT71(in_register_00000009,param_1),'\0');
    uVar3 = -(uint)(cVar2 != '\0') & 1;
    __scrt_dllmain_uninitialize_critical();
  }
  return uVar3;
}



// WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall
// WARNING: Removing unreachable block (ram,0x00018000663e)
// WARNING: Removing unreachable block (ram,0x0001800065cf)
// WARNING: Removing unreachable block (ram,0x000180006681)
// Library Function - Single Match
//  int __cdecl dllmain_dispatch(struct HINSTANCE__ * __ptr64 const,unsigned long,void * __ptr64
// const)
// 
// Library: Visual Studio 2019 Release

int __cdecl dllmain_dispatch(HINSTANCE__ *param_1,ulong param_2,void *param_3)

{
  int iVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  
  if ((param_2 == 0) && (DAT_1800108b0 < 1)) {
    iVar1 = 0;
  }
  else {
    if (param_2 - 1 < 2) {
      uVar2 = FUN_180006314(param_1,param_2,(longlong)param_3);
      if ((int)uVar2 == 0) {
        return 0;
      }
    }
    uVar3 = DllMain(param_1,param_2);
    iVar1 = (int)uVar3;
    if ((param_2 == 1) && (iVar1 == 0)) {
      DllMain(param_1,0);
      dllmain_crt_process_detach(param_3 != (void *)0x0);
    }
    if ((param_2 == 0) || (param_2 == 3)) {
      uVar2 = FUN_180006314(param_1,param_2,(longlong)param_3);
      iVar1 = (int)uVar2;
      if (iVar1 != 0) {
        iVar1 = 1;
      }
    }
  }
  return iVar1;
}



ulonglong thunk_FUN_180006314(undefined8 param_1,int param_2,longlong param_3)

{
  ulonglong uVar1;
  
  uVar1 = FUN_180006314(param_1,param_2,param_3);
  return uVar1;
}



// Library Function - Single Match
//  _DllMainCRTStartup
// 
// Library: Visual Studio 2019 Release

void _DllMainCRTStartup(HINSTANCE__ *param_1,ulong param_2,void *param_3)

{
  if (param_2 == 1) {
    __security_init_cookie();
  }
  dllmain_dispatch(param_1,param_2,param_3);
  return;
}



void FUN_180006770(void)

{
  return;
}



undefined8 FUN_180006774(undefined8 *param_1)

{
  return *param_1;
}



undefined8 FUN_180006778(undefined8 *param_1)

{
  return *param_1;
}



void FUN_18000677c(longlong param_1)

{
  code *pcVar1;
  
  if (param_1 - 0x18000d600U < 0x181) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}



void FUN_1800067a0(longlong param_1)

{
  code *pcVar1;
  
  if (param_1 - 0x18000d600U < 0x181) {
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(0x41);
  }
  return;
}



// WARNING: Removing unreachable block (ram,0x0001800067fc)

void FUN_1800067d0(longlong param_1)

{
  return;
}



// WARNING: Removing unreachable block (ram,0x000180006828)

void FUN_180006818(void)

{
  return;
}



// WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall

void FUN_180006840(longlong param_1)

{
  if ((param_1 - 0x18000d600U < 0x181) && (DAT_1800108b8 != 0)) {
    (*(code *)DAT_1800108b8)();
  }
  return;
}



// WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall

void FUN_180006884(void)

{
  if (DAT_1800108b8 != 0) {
    (*(code *)DAT_1800108b8)();
  }
  return;
}



undefined8 FUN_1800068cc(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = DAT_1800108b8;
  LOCK();
  DAT_1800108b8 = param_1;
  UNLOCK();
  return uVar1;
}



void FUN_1800068dc(longlong param_1,longlong param_2,ulonglong param_3)

{
  code *pcVar1;
  
  if ((param_3 < (param_1 - param_2) - 0x18000d600U) && (param_1 - 0x18000d600U < 0x181)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}



void FUN_180006920(longlong param_1,longlong param_2,ulonglong param_3)

{
  code *pcVar1;
  
  if ((param_3 < (param_1 - param_2) - 0x18000d600U) && (param_1 - 0x18000d600U < 0x181)) {
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(0x41);
  }
  return;
}



// WARNING: Removing unreachable block (ram,0x0001800069b1)

void FUN_18000696c(longlong param_1,longlong param_2,ulonglong param_3)

{
  return;
}



// WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall

void FUN_1800069d4(longlong param_1,longlong param_2,ulonglong param_3)

{
  if (((param_3 < (param_1 - param_2) - 0x18000d600U) && (param_1 - 0x18000d600U < 0x181)) &&
     (DAT_1800108b8 != 0)) {
    (*(code *)DAT_1800108b8)();
  }
  return;
}



undefined8 FUN_180006a58(void)

{
  return 0;
}



undefined8 FUN_180006a74(void)

{
  return 0;
}



undefined8 * FUN_180006a78(undefined8 *param_1,undefined8 param_2)

{
  param_1[2] = 0;
  *param_1 = std::bad_alloc::vftable;
  param_1[1] = param_2;
  return param_1;
}



undefined8 * FUN_180006a94(undefined8 *param_1)

{
  param_1[2] = 0;
  param_1[1] = "bad allocation";
  *param_1 = std::bad_alloc::vftable;
  return param_1;
}



undefined8 * FUN_180006abc(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = std::exception::vftable;
  param_1[2] = 0;
  param_1[1] = param_2;
  return param_1;
}



void FUN_180006ad8(undefined8 *param_1)

{
  *param_1 = std::exception::vftable;
  __std_exception_destroy(param_1 + 1);
  return;
}



void FUN_180006af0(void)

{
  undefined8 local_28 [5];
  
  thunk_FUN_180006a94(local_28);
                    // WARNING: Subroutine does not return
  _CxxThrowException(local_28,(ThrowInfo *)&DAT_18000f410);
}



void FUN_180006b18(void)

{
  undefined8 local_28 [5];
  
  thunk_FUN_180003c20(local_28);
                    // WARNING: Subroutine does not return
  _CxxThrowException(local_28,(ThrowInfo *)&DAT_18000f2f8);
}



void __cdecl free(void *_Memory)

{
                    // WARNING: Could not recover jumptable at 0x0001800078a4. Too many branches
                    // WARNING: Treating indirect jump as call
  free(_Memory);
  return;
}



// WARNING: Removing unreachable block (ram,0x000180006c12)
// WARNING: Removing unreachable block (ram,0x000180006b82)
// WARNING: Removing unreachable block (ram,0x000180006b5b)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_180006b48(void)

{
  int *piVar1;
  uint *puVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  byte in_XCR0;
  
  piVar1 = (int *)cpuid_basic_info(0);
  uVar6 = 0;
  puVar2 = (uint *)cpuid_Version_info(1);
  uVar4 = puVar2[3];
  if ((piVar1[2] == 0x49656e69 && piVar1[3] == 0x6c65746e) && piVar1[1] == 0x756e6547) {
    _DAT_180010048 = 0xffffffffffffffff;
    uVar5 = *puVar2 & 0xfff3ff0;
    _DAT_180010040 = 0x8000;
    if ((((uVar5 == 0x106c0) || (uVar5 == 0x20660)) || (uVar5 == 0x20670)) ||
       ((uVar5 - 0x30650 < 0x21 &&
        ((0x100010001U >> ((ulonglong)(uVar5 - 0x30650) & 0x3f) & 1) != 0)))) {
      DAT_1800108c4 = DAT_1800108c4 | 1;
    }
  }
  if (6 < *piVar1) {
    lVar3 = cpuid_Extended_Feature_Enumeration_info(7);
    uVar6 = *(uint *)(lVar3 + 4);
    if ((uVar6 >> 9 & 1) != 0) {
      DAT_1800108c4 = DAT_1800108c4 | 2;
    }
  }
  _DAT_180010038 = 1;
  DAT_18001003c = 2;
  if ((uVar4 >> 0x14 & 1) != 0) {
    _DAT_180010038 = 2;
    DAT_18001003c = 6;
    if ((((uVar4 >> 0x1b & 1) != 0) && ((uVar4 >> 0x1c & 1) != 0)) && ((in_XCR0 & 6) == 6)) {
      DAT_18001003c = 0xe;
      _DAT_180010038 = 3;
      if ((uVar6 & 0x20) != 0) {
        _DAT_180010038 = 5;
        DAT_18001003c = 0x2e;
        if (((uVar6 & 0xd0030000) == 0xd0030000) && ((in_XCR0 & 0xe0) == 0xe0)) {
          DAT_18001003c = 0x6e;
          _DAT_180010038 = 6;
        }
      }
    }
  }
  return 0;
}



undefined8 FUN_180006d60(void)

{
  return 1;
}



// Library Function - Single Match
//  __scrt_is_ucrt_dll_in_use
// 
// Library: Visual Studio 2019 Release

bool __scrt_is_ucrt_dll_in_use(void)

{
  return DAT_180010060 != 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_180006d78(void)

{
  _DAT_1800108c8 = 0;
  return;
}



void FUN_180006d84(undefined4 param_1)

{
  code *pcVar1;
  BOOL BVar2;
  LONG LVar3;
  PRUNTIME_FUNCTION FunctionEntry;
  undefined1 *puVar4;
  undefined8 unaff_retaddr;
  DWORD64 local_res10;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined1 auStack_5c8 [8];
  undefined1 auStack_5c0 [232];
  undefined1 local_4d8 [152];
  undefined1 *local_440;
  DWORD64 local_3e0;
  
  puVar4 = auStack_5c8;
  BVar2 = IsProcessorFeaturePresent(0x17);
  if (BVar2 != 0) {
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(param_1);
    puVar4 = auStack_5c0;
  }
  *(undefined8 *)(puVar4 + -8) = 0x180006db8;
  thunk_FUN_180006d78();
  *(undefined8 *)(puVar4 + -8) = 0x180006dc9;
  memset(local_4d8,0,0x4d0);
  *(undefined8 *)(puVar4 + -8) = 0x180006dd3;
  RtlCaptureContext(local_4d8);
  *(undefined8 *)(puVar4 + -8) = 0x180006ded;
  FunctionEntry = RtlLookupFunctionEntry(local_3e0,&local_res10,(PUNWIND_HISTORY_TABLE)0x0);
  if (FunctionEntry != (PRUNTIME_FUNCTION)0x0) {
    *(undefined8 *)(puVar4 + 0x38) = 0;
    *(undefined1 **)(puVar4 + 0x30) = local_res18;
    *(undefined1 **)(puVar4 + 0x28) = local_res20;
    *(undefined1 **)(puVar4 + 0x20) = local_4d8;
    *(undefined8 *)(puVar4 + -8) = 0x180006e2e;
    RtlVirtualUnwind(0,local_res10,local_3e0,FunctionEntry,*(PCONTEXT *)(puVar4 + 0x20),
                     *(PVOID **)(puVar4 + 0x28),*(PDWORD64 *)(puVar4 + 0x30),
                     *(PKNONVOLATILE_CONTEXT_POINTERS *)(puVar4 + 0x38));
  }
  local_440 = &stack0x00000008;
  *(undefined8 *)(puVar4 + -8) = 0x180006e60;
  memset(puVar4 + 0x50,0,0x98);
  *(undefined8 *)(puVar4 + 0x60) = unaff_retaddr;
  *(undefined4 *)(puVar4 + 0x50) = 0x40000015;
  *(undefined4 *)(puVar4 + 0x54) = 1;
  *(undefined8 *)(puVar4 + -8) = 0x180006e82;
  BVar2 = IsDebuggerPresent();
  *(undefined1 **)(puVar4 + 0x40) = puVar4 + 0x50;
  *(undefined1 **)(puVar4 + 0x48) = local_4d8;
  *(undefined8 *)(puVar4 + -8) = 0x180006ea3;
  SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)0x0);
  *(undefined8 *)(puVar4 + -8) = 0x180006eae;
  LVar3 = UnhandledExceptionFilter((_EXCEPTION_POINTERS *)(puVar4 + 0x40));
  if ((LVar3 == 0) && (BVar2 != 1)) {
    *(undefined8 *)(puVar4 + -8) = 0x180006ebe;
    thunk_FUN_180006d78();
  }
  return;
}



// Library Function - Single Match
//  __scrt_get_show_window_mode
// 
// Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release

WORD __scrt_get_show_window_mode(void)

{
  WORD WVar1;
  _STARTUPINFOW local_78;
  
  memset(&local_78,0,0x68);
  GetStartupInfoW(&local_78);
  WVar1 = 10;
  if (((byte)local_78.dwFlags & 1) != 0) {
    WVar1 = local_78.wShowWindow;
  }
  return WVar1;
}



undefined8 thunk_FUN_180006ff4(void)

{
  undefined8 uVar1;
  
  uVar1 = thunk_FUN_180006ff4();
  return uVar1;
}



undefined8 FUN_180006f74(void)

{
  return 0;
}



ulonglong FUN_180006f78(void)

{
  HMODULE pHVar1;
  ulonglong uVar2;
  int *piVar3;
  
  pHVar1 = GetModuleHandleW((LPCWSTR)0x0);
  if ((((pHVar1 == (HMODULE)0x0) || ((short)pHVar1->unused != 0x5a4d)) ||
      (piVar3 = (int *)((longlong)&pHVar1->unused + (longlong)pHVar1[0xf].unused), *piVar3 != 0x4550
      )) || ((pHVar1 = (HMODULE)0x20b, (short)piVar3[6] != 0x20b || ((uint)piVar3[0x21] < 0xf)))) {
    uVar2 = (ulonglong)pHVar1 & 0xffffffffffffff00;
  }
  else {
    uVar2 = CONCAT71(2,piVar3[0x3e] != 0);
  }
  return uVar2;
}



void FUN_180006fe0(void)

{
                    // WARNING: Could not recover jumptable at 0x000180006fe7. Too many branches
                    // WARNING: Treating indirect jump as call
  SetUnhandledExceptionFilter(thunk_FUN_180006ff8);
  return;
}



undefined8 FUN_180006ff4(void)

{
  return 0;
}



undefined8 FUN_180006ff8(undefined8 *param_1)

{
  int *piVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  piVar1 = (int *)*param_1;
  if ((*piVar1 == -0x1f928c9d) && (piVar1[6] == 4)) {
    if ((piVar1[8] + 0xe66cfae0U < 3) || (piVar1[8] == 0x1994000)) {
      puVar3 = (undefined8 *)__current_exception();
      *puVar3 = piVar1;
      uVar2 = param_1[1];
      puVar3 = (undefined8 *)__current_exception_context();
      *puVar3 = uVar2;
                    // WARNING: Subroutine does not return
      terminate();
    }
  }
  return 0;
}



// Library Function - Single Match
//  __raise_securityfailure
// 
// Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release

void __raise_securityfailure(_EXCEPTION_POINTERS *param_1)

{
  HANDLE pvVar1;
  
  SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)0x0);
  UnhandledExceptionFilter(param_1);
  pvVar1 = GetCurrentProcess();
                    // WARNING: Could not recover jumptable at 0x000180007099. Too many branches
                    // WARNING: Treating indirect jump as call
  TerminateProcess(pvVar1,0xc0000409);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_1800070b0(void)

{
  code *pcVar1;
  BOOL BVar2;
  undefined1 *puVar3;
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [48];
  
  puVar3 = auStack_38;
  BVar2 = IsProcessorFeaturePresent(0x17);
  if (BVar2 != 0) {
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(2);
    puVar3 = auStack_30;
  }
  *(undefined8 *)(puVar3 + -8) = 0x1800070db;
  capture_previous_context((PCONTEXT)&DAT_180010970);
  _DAT_1800108e0 = *(undefined8 *)(puVar3 + 0x38);
  _DAT_180010a08 = puVar3 + 0x40;
  _DAT_1800109f0 = *(undefined8 *)(puVar3 + 0x40);
  _DAT_1800108d0 = 0xc0000409;
  _DAT_1800108d4 = 1;
  _DAT_1800108e8 = 1;
  DAT_1800108f0 = 2;
  *(undefined8 *)(puVar3 + 0x20) = DAT_180010028;
  *(undefined8 *)(puVar3 + 0x28) = DAT_180010020;
  *(undefined8 *)(puVar3 + -8) = 0x18000717d;
  DAT_180010a68 = _DAT_1800108e0;
  __raise_securityfailure((_EXCEPTION_POINTERS *)&PTR_DAT_18000d238);
  return;
}



void FUN_1800071b8(void)

{
  thunk_FUN_1800071d0(8);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_1800071d0(undefined4 param_1)

{
  code *pcVar1;
  BOOL BVar2;
  undefined1 *puVar3;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [32];
  
  puVar3 = auStack_28;
  BVar2 = IsProcessorFeaturePresent(0x17);
  if (BVar2 != 0) {
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(param_1);
    puVar3 = auStack_20;
  }
  *(undefined8 *)(puVar3 + -8) = 0x1800071fb;
  capture_current_context((PCONTEXT)&DAT_180010970);
  _DAT_1800108e0 = *(undefined8 *)(puVar3 + 0x28);
  _DAT_180010a08 = puVar3 + 0x30;
  _DAT_1800108d0 = 0xc0000409;
  _DAT_1800108d4 = 1;
  _DAT_1800108e8 = 1;
  DAT_1800108f0 = (ulonglong)*(uint *)(puVar3 + 0x30);
  *(undefined8 *)(puVar3 + -8) = 0x180007267;
  DAT_180010a68 = _DAT_1800108e0;
  __raise_securityfailure((_EXCEPTION_POINTERS *)&PTR_DAT_18000d238);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_180007294(undefined4 param_1)

{
  code *pcVar1;
  BOOL BVar2;
  undefined1 *puVar3;
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [48];
  
  puVar3 = auStack_38;
  BVar2 = IsProcessorFeaturePresent(0x17);
  if (BVar2 != 0) {
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(param_1);
    puVar3 = auStack_30;
  }
  *(undefined8 *)(puVar3 + -8) = 0x1800072c8;
  capture_current_context((PCONTEXT)&DAT_180010970);
  _DAT_1800108e0 = *(undefined8 *)(puVar3 + 0x38);
  _DAT_180010a08 = puVar3 + 0x40;
  _DAT_1800108d0 = 0xc0000409;
  _DAT_1800108d4 = 1;
  if ((*(int *)(puVar3 + 0x48) != 0) && (*(longlong *)(puVar3 + 0x50) == 0)) {
    *(undefined4 *)(puVar3 + 0x48) = 0;
  }
  if (0xe < *(uint *)(puVar3 + 0x48)) {
    *(int *)(puVar3 + 0x48) = *(int *)(puVar3 + 0x48) + -1;
  }
  _DAT_1800108e8 = *(int *)(puVar3 + 0x48) + 1;
  DAT_1800108f0 = (ulonglong)*(uint *)(puVar3 + 0x40);
  *(undefined4 *)(puVar3 + 0x20) = 0;
  DAT_180010a68 = _DAT_1800108e0;
  while (*(uint *)(puVar3 + 0x20) < *(uint *)(puVar3 + 0x48)) {
    (&DAT_1800108f0)[*(int *)(puVar3 + 0x20) + 1] =
         *(undefined8 *)(*(longlong *)(puVar3 + 0x50) + (ulonglong)*(uint *)(puVar3 + 0x20) * 8);
    *(int *)(puVar3 + 0x20) = *(int *)(puVar3 + 0x20) + 1;
  }
  *(undefined8 *)(puVar3 + -8) = 0x18000739e;
  __raise_securityfailure((_EXCEPTION_POINTERS *)&PTR_DAT_18000d238);
  return;
}



// Library Function - Single Match
//  capture_current_context
// 
// Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release

void capture_current_context(PCONTEXT param_1)

{
  DWORD64 ControlPc;
  PRUNTIME_FUNCTION FunctionEntry;
  DWORD64 local_res8;
  ulonglong local_res10;
  PVOID local_res18;
  
  RtlCaptureContext();
  ControlPc = param_1->Rip;
  FunctionEntry = RtlLookupFunctionEntry(ControlPc,&local_res8,(PUNWIND_HISTORY_TABLE)0x0);
  if (FunctionEntry != (PRUNTIME_FUNCTION)0x0) {
    RtlVirtualUnwind(0,local_res8,ControlPc,FunctionEntry,param_1,&local_res18,&local_res10,
                     (PKNONVOLATILE_CONTEXT_POINTERS)0x0);
  }
  return;
}



// Library Function - Single Match
//  capture_previous_context
// 
// Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release

void capture_previous_context(PCONTEXT param_1)

{
  DWORD64 ControlPc;
  PRUNTIME_FUNCTION FunctionEntry;
  int iVar1;
  DWORD64 local_res8;
  ulonglong local_res10;
  PVOID local_res18 [2];
  
  RtlCaptureContext();
  ControlPc = param_1->Rip;
  iVar1 = 0;
  do {
    FunctionEntry = RtlLookupFunctionEntry(ControlPc,&local_res8,(PUNWIND_HISTORY_TABLE)0x0);
    if (FunctionEntry == (PRUNTIME_FUNCTION)0x0) {
      return;
    }
    RtlVirtualUnwind(0,local_res8,ControlPc,FunctionEntry,param_1,local_res18,&local_res10,
                     (PKNONVOLATILE_CONTEXT_POINTERS)0x0);
    iVar1 = iVar1 + 1;
  } while (iVar1 < 2);
  return;
}



ulonglong FUN_180007500(void)

{
  DWORD DVar1;
  _FILETIME local_res8;
  _FILETIME local_res10;
  LARGE_INTEGER local_res18 [2];
  
  local_res10.dwLowDateTime = 0;
  local_res10.dwHighDateTime = 0;
  GetSystemTimeAsFileTime(&local_res10);
  local_res8 = local_res10;
  DVar1 = GetCurrentThreadId();
  local_res8 = (_FILETIME)((ulonglong)local_res8 ^ (ulonglong)DVar1);
  DVar1 = GetCurrentProcessId();
  local_res8 = (_FILETIME)((ulonglong)local_res8 ^ (ulonglong)DVar1);
  QueryPerformanceCounter(local_res18);
  return ((ulonglong)(uint)local_res18[0]._0_4_ << 0x20 ^
          CONCAT44(local_res18[0].s.HighPart,local_res18[0].s.LowPart) ^ (ulonglong)local_res8 ^
         (ulonglong)&local_res8) & 0xffffffffffff;
}



// Library Function - Single Match
//  __security_init_cookie
// 
// Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release

void __cdecl __security_init_cookie(void)

{
  DWORD DVar1;
  _FILETIME local_res8;
  LARGE_INTEGER local_res10;
  _FILETIME local_18 [2];
  
  if (DAT_180010028 == 0x2b992ddfa232) {
    local_res8.dwLowDateTime = 0;
    local_res8.dwHighDateTime = 0;
    GetSystemTimeAsFileTime(&local_res8);
    local_18[0] = local_res8;
    DVar1 = GetCurrentThreadId();
    local_18[0] = (_FILETIME)((ulonglong)local_18[0] ^ (ulonglong)DVar1);
    DVar1 = GetCurrentProcessId();
    local_18[0] = (_FILETIME)((ulonglong)local_18[0] ^ (ulonglong)DVar1);
    QueryPerformanceCounter(&local_res10);
    DAT_180010028 =
         ((ulonglong)local_res10.s.LowPart << 0x20 ^
          CONCAT44(local_res10.s.HighPart,local_res10.s.LowPart) ^ (ulonglong)local_18[0] ^
         (ulonglong)local_18) & 0xffffffffffff;
    if (DAT_180010028 == 0x2b992ddfa232) {
      DAT_180010028 = 0x2b992ddfa233;
    }
  }
  DAT_180010020 = ~DAT_180010028;
  return;
}



// Library Function - Single Match
//  DllMain
// 
// Library: Visual Studio 2019 Release

undefined8 DllMain(HMODULE param_1,int param_2)

{
  if (param_2 == 1) {
    DisableThreadLibraryCalls(param_1);
  }
  return 1;
}



void FUN_18000768c(void)

{
                    // WARNING: Could not recover jumptable at 0x000180007693. Too many branches
                    // WARNING: Treating indirect jump as call
  InitializeSListHead(&DAT_180010f60);
  return;
}



void FUN_1800076a0(void)

{
  __std_type_info_destroy_list(&DAT_180010f60);
  return;
}



undefined * FUN_1800076b0(void)

{
  return &DAT_180010f78;
}



undefined * FUN_1800076bc(void)

{
  return &DAT_180010f88;
}



void FUN_1800076c8(void)

{
  ulonglong *puVar1;
  
  puVar1 = (ulonglong *)thunk_FUN_1800076b0();
  *puVar1 = *puVar1 | 0x24;
  puVar1 = (ulonglong *)thunk_FUN_1800076bc();
  *puVar1 = *puVar1 | 2;
  return;
}



undefined * FUN_1800076ec(void)

{
  return &DAT_180010f98;
}



// WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall

void FUN_1800076f8(void)

{
  undefined8 *puVar1;
  
  for (puVar1 = &DAT_18000e180; puVar1 < &DAT_18000e288; puVar1 = puVar1 + 1) {
    if ((code *)*puVar1 != (code *)0x0) {
      (*(code *)*puVar1)();
    }
  }
  return;
}



// WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall
// Library Function - Single Match
//  _RTC_Terminate
// 
// Library: Visual Studio 2019 Release

void _RTC_Terminate(void)

{
  undefined8 *puVar1;
  
  for (puVar1 = &DAT_18000e3a0; puVar1 < &DAT_18000e4a8; puVar1 = puVar1 + 1) {
    if ((code *)*puVar1 != (code *)0x0) {
      (*(code *)*puVar1)();
    }
  }
  return;
}



void __std_exception_copy(void)

{
                    // WARNING: Could not recover jumptable at 0x0001800077fc. Too many branches
                    // WARNING: Treating indirect jump as call
  __std_exception_copy();
  return;
}



void __std_exception_destroy(void)

{
                    // WARNING: Could not recover jumptable at 0x000180007802. Too many branches
                    // WARNING: Treating indirect jump as call
  __std_exception_destroy();
  return;
}



void __stdcall _CxxThrowException(void *pExceptionObject,ThrowInfo *pThrowInfo)

{
                    // WARNING: Could not recover jumptable at 0x000180007808. Too many branches
                    // WARNING: Subroutine does not return
                    // WARNING: Treating indirect jump as call
  _CxxThrowException(pExceptionObject,pThrowInfo);
  return;
}



void __CxxFrameHandler4(void)

{
                    // WARNING: Could not recover jumptable at 0x00018000780e. Too many branches
                    // WARNING: Treating indirect jump as call
  __CxxFrameHandler4();
  return;
}



void * __cdecl memcpy(void *_Dst,void *_Src,size_t _Size)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000180007814. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = memcpy(_Dst,_Src,_Size);
  return pvVar1;
}



void * __cdecl memmove(void *_Dst,void *_Src,size_t _Size)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x00018000781a. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = memmove(_Dst,_Src,_Size);
  return pvVar1;
}



void __current_exception(void)

{
                    // WARNING: Could not recover jumptable at 0x000180007820. Too many branches
                    // WARNING: Treating indirect jump as call
  __current_exception();
  return;
}



void __current_exception_context(void)

{
                    // WARNING: Could not recover jumptable at 0x000180007826. Too many branches
                    // WARNING: Treating indirect jump as call
  __current_exception_context();
  return;
}



void * __cdecl memset(void *_Dst,int _Val,size_t _Size)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000180007832. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = memset(_Dst,_Val,_Size);
  return pvVar1;
}



void __std_type_info_destroy_list(void)

{
                    // WARNING: Could not recover jumptable at 0x000180007838. Too many branches
                    // WARNING: Treating indirect jump as call
  __std_type_info_destroy_list();
  return;
}



float __cdecl ceilf(float _X)

{
  float fVar1;
  
                    // WARNING: Could not recover jumptable at 0x00018000784a. Too many branches
                    // WARNING: Treating indirect jump as call
  fVar1 = ceilf(_X);
  return fVar1;
}



void terminate(void)

{
                    // WARNING: Could not recover jumptable at 0x000180007850. Too many branches
                    // WARNING: Subroutine does not return
                    // WARNING: Treating indirect jump as call
  terminate();
  return;
}



int __cdecl _callnewh(size_t _Size)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000180007856. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = _callnewh(_Size);
  return iVar1;
}



void * __cdecl malloc(size_t _Size)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x00018000785c. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = malloc(_Size);
  return pvVar1;
}



void _seh_filter_dll(void)

{
                    // WARNING: Could not recover jumptable at 0x000180007862. Too many branches
                    // WARNING: Treating indirect jump as call
  _seh_filter_dll();
  return;
}



void _configure_narrow_argv(void)

{
                    // WARNING: Could not recover jumptable at 0x000180007868. Too many branches
                    // WARNING: Treating indirect jump as call
  _configure_narrow_argv();
  return;
}



void _initialize_narrow_environment(void)

{
                    // WARNING: Could not recover jumptable at 0x00018000786e. Too many branches
                    // WARNING: Treating indirect jump as call
  _initialize_narrow_environment();
  return;
}



void _initialize_onexit_table(void)

{
                    // WARNING: Could not recover jumptable at 0x000180007874. Too many branches
                    // WARNING: Treating indirect jump as call
  _initialize_onexit_table();
  return;
}



void _register_onexit_function(void)

{
                    // WARNING: Could not recover jumptable at 0x00018000787a. Too many branches
                    // WARNING: Treating indirect jump as call
  _register_onexit_function();
  return;
}



void _execute_onexit_table(void)

{
                    // WARNING: Could not recover jumptable at 0x000180007880. Too many branches
                    // WARNING: Treating indirect jump as call
  _execute_onexit_table();
  return;
}



void _crt_atexit(void)

{
                    // WARNING: Could not recover jumptable at 0x000180007886. Too many branches
                    // WARNING: Treating indirect jump as call
  _crt_atexit();
  return;
}



void __cdecl _cexit(void)

{
                    // WARNING: Could not recover jumptable at 0x000180007892. Too many branches
                    // WARNING: Treating indirect jump as call
  _cexit();
  return;
}



void _initterm(void)

{
                    // WARNING: Could not recover jumptable at 0x000180007898. Too many branches
                    // WARNING: Treating indirect jump as call
  _initterm();
  return;
}



void _initterm_e(void)

{
                    // WARNING: Could not recover jumptable at 0x00018000789e. Too many branches
                    // WARNING: Treating indirect jump as call
  _initterm_e();
  return;
}



void __cdecl free(void *_Memory)

{
                    // WARNING: Could not recover jumptable at 0x0001800078a4. Too many branches
                    // WARNING: Treating indirect jump as call
  free(_Memory);
  return;
}



undefined1 FUN_1800078ac(void)

{
  return 1;
}



undefined1 FUN_1800078b0(void)

{
  return 1;
}



undefined1 FUN_1800078b4(void)

{
  return 1;
}



undefined1 FUN_1800078b8(void)

{
  return 1;
}



undefined1 FUN_1800078bc(void)

{
  return 1;
}



undefined8 FUN_1800078c0(void)

{
  return 0;
}



// WARNING: This is an inlined function

void FUN_180008a60(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
                    // WARNING: Could not recover jumptable at 0x000180008a60. Too many branches
                    // WARNING: Treating indirect jump as call
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



// WARNING: This is an inlined function

void _guard_dispatch_icall(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
                    // WARNING: Could not recover jumptable at 0x000180008a60. Too many branches
                    // WARNING: Treating indirect jump as call
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



void FUN_180009ac0(undefined8 param_1,longlong param_2)

{
  thunk_FUN_180002af0(*(longlong **)(param_2 + 0x78),*(longlong **)(param_2 + 0x20));
  thunk_FUN_180005460(*(undefined8 *)(param_2 + 0x70),*(void **)(param_2 + 0x28),
                      *(longlong *)(param_2 + 0x88));
                    // WARNING: Subroutine does not return
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}



void FUN_180009c20(undefined8 param_1,longlong param_2)

{
  _eh_vector_destructor_iterator_((void *)(param_2 + 0x80),0x48,1,~SignatureData_exref);
  return;
}



void FUN_180009c60(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;
    thunk_FUN_180004140(*(longlong **)(param_2 + 0x60));
  }
  return;
}



void FUN_180009d14(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x20) == '\0') {
    __ArrayUnwind(*(void **)(param_2 + 0x60),*(__uint64 *)(param_2 + 0x68),
                  *(__uint64 *)(param_2 + 0x70),*(_func_void_void_ptr **)(param_2 + 0x78));
  }
  return;
}



undefined4 FUN_180009d4b(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  *(undefined8 *)(param_2 + 0x40) = param_1;
  *(undefined8 *)(param_2 + 0x30) = param_1;
  *(undefined8 *)(param_2 + 0x28) = **(undefined8 **)(param_2 + 0x30);
  if (**(int **)(param_2 + 0x28) != -0x1f928c9d) {
    *(undefined4 *)(param_2 + 0x20) = 0;
    return *(undefined4 *)(param_2 + 0x20);
  }
  puVar2 = (undefined8 *)__current_exception();
  *puVar2 = *(undefined8 *)(param_2 + 0x28);
  uVar1 = *(undefined8 *)(*(longlong *)(param_2 + 0x30) + 8);
  puVar2 = (undefined8 *)__current_exception_context();
  *puVar2 = uVar1;
                    // WARNING: Subroutine does not return
  terminate();
}



bool FUN_180009dc1(undefined8 *param_1)

{
  return *(int *)*param_1 == -0x3ffffffb;
}



void FUN_180009ddf(undefined8 param_1,longlong param_2)

{
  __scrt_release_startup_lock(*(char *)(param_2 + 0x40));
  return;
}



void FUN_180009dfb(undefined8 param_1,longlong param_2)

{
  __scrt_release_startup_lock(*(char *)(param_2 + 0x20));
  return;
}



void FUN_180009e14(void)

{
  __scrt_dllmain_uninitialize_critical();
  return;
}



void FUN_180009e33(undefined8 *param_1,longlong param_2)

{
  __scrt_dllmain_exception_filter
            (*(undefined8 *)(param_2 + 0x60),*(int *)(param_2 + 0x68),
             *(undefined8 *)(param_2 + 0x70),FUN_180006314,*(undefined4 *)*param_1,param_1);
  return;
}



void FUN_18000ae90(void)

{
  undefined8 *puVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  plVar3 = DAT_180010008;
  if (DAT_180010000 != (longlong *)0x0) {
    plVar2 = DAT_180010000;
    if (DAT_180010000 != DAT_180010008) {
      do {
        puVar1 = (undefined8 *)*plVar2;
        if (puVar1 != (undefined8 *)0x0) {
          (**(code **)*puVar1)(puVar1,1);
        }
        plVar2 = plVar2 + 1;
      } while (plVar2 != plVar3);
    }
    plVar3 = DAT_180010000;
    if ((0xfff < (DAT_180010010 - (longlong)DAT_180010000 & 0xfffffffffffffff8U)) &&
       (plVar3 = (longlong *)DAT_180010000[-1],
       0x1f < (ulonglong)((longlong)DAT_180010000 + (-8 - (longlong)plVar3)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_18000128f(plVar3);
    DAT_180010000 = (longlong *)0x0;
    DAT_180010008 = (longlong *)0x0;
    DAT_180010010 = 0;
  }
  return;
}



void FUN_18000aea6(void)

{
  undefined8 *puVar1;
  longlong *unaff_RBX;
  longlong *plVar2;
  longlong *plVar3;
  
  plVar3 = DAT_180010008;
  plVar2 = unaff_RBX;
  if (unaff_RBX != DAT_180010008) {
    do {
      puVar1 = (undefined8 *)*plVar2;
      if (puVar1 != (undefined8 *)0x0) {
        (**(code **)*puVar1)(puVar1,1);
      }
      plVar2 = plVar2 + 1;
      unaff_RBX = DAT_180010000;
    } while (plVar2 != plVar3);
  }
  plVar3 = unaff_RBX;
  if ((0xfff < (DAT_180010010 - (longlong)unaff_RBX & 0xfffffffffffffff8U)) &&
     (plVar3 = (longlong *)unaff_RBX[-1],
     0x1f < (ulonglong)((longlong)unaff_RBX + (-8 - (longlong)plVar3)))) {
                    // WARNING: Subroutine does not return
    _invalid_parameter_noinfo_noreturn();
  }
  FUN_18000128f(plVar3);
  DAT_180010000 = (longlong *)0x0;
  DAT_180010008 = (longlong *)0x0;
  DAT_180010010 = 0;
  return;
}



void FUN_18000aef5(void)

{
  longlong unaff_RBX;
  
  if ((unaff_RBX - (longlong)*(void **)(unaff_RBX + -8)) - 8U < 0x20) {
    FUN_18000128f(*(void **)(unaff_RBX + -8));
    DAT_180010000 = 0;
    DAT_180010008 = 0;
    DAT_180010010 = 0;
    return;
  }
                    // WARNING: Subroutine does not return
  _invalid_parameter_noinfo_noreturn();
}



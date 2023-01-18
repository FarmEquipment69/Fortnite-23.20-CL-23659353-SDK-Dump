// ScriptStruct /Script/Solaris.VersePackageContainerSettings
// Size: 0x38
struct FVersePackageContainerSettings
{
	struct FString VersePath; // 0x0 (0x10)
	enum EVersePackageScope VerseScope; // 0x10 (0x1)
	unsigned char unreflected_11[0x7]; // 0x11 (0x7) 
	struct TArray<struct FString> DependencyPackages; // 0x18 (0x10)
	struct FString VniDestDir; // 0x28 (0x10)
};


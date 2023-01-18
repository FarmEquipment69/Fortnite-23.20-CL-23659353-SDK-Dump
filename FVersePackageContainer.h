// ScriptStruct /Script/Solaris.VersePackageContainer
// Size: 0x68
struct FVersePackageContainer
{
	struct FString Name; // 0x0 (0x10)
	struct FString DirPath; // 0x10 (0x10)
	struct FVersePackageContainerSettings Settings; // 0x20 (0x38)
	struct TArray<struct FVerseSourceFile> SourceFiles; // 0x58 (0x10)
};


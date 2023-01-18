// ScriptStruct /Script/BuildPatchServices.FileManifestData
// Size: 0x68
struct FFileManifestData
{
	struct FString Filename; // 0x0 (0x10)
	struct FSHAHashData FileHash; // 0x10 (0x14)
	unsigned char unreflected_24[0x4]; // 0x24 (0x4) 
	struct TArray<struct FChunkPartData> FileChunkParts; // 0x28 (0x10)
	struct TArray<struct FString> InstallTags; // 0x38 (0x10)
	bool bIsUnixExecutable; // 0x48 (0x1)
	unsigned char unreflected_49[0x7]; // 0x49 (0x7) 
	struct FString SymlinkTarget; // 0x50 (0x10)
	bool bIsReadOnly; // 0x60 (0x1)
	bool bIsCompressed; // 0x61 (0x1)
	unsigned char padding_62[0x6]; // 0x62 (0x6)
};


// Class /Script/SidecarSys.SidecarDss
// Size: 0xd8
class USidecarDss : public UObject
{
	struct TMap<struct FString, struct FSidecarFileInfo> FileInfoMap; // 0x28 (0x50)
	struct FString DssDownloadUrl; // 0x78 (0x10)
	struct FString DssCheckoutUrl; // 0x88 (0x10)
	struct FString DssUploadUrl; // 0x98 (0x10)
	struct FString DssRestoreUrl; // 0xa8 (0x10)
	struct FString DssCheckinUrl; // 0xb8 (0x10)
	struct FString DssListFilesUrl; // 0xc8 (0x10)
};


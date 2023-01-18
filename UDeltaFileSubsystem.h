// Class /Script/DeltaFileSystem.DeltaFileSubsystem
// Size: 0xe8
class UDeltaFileSubsystem : public UEngineSubsystem
{
	struct TMap<class UWorld*, struct FDeltaTrackingHandles> WorldToTrackingHandles; // 0x30 (0x50)
	struct TMap<struct FName, class UObject*> DeltaFiles; // 0x80 (0x50)
	struct FSoftClassPath DefaultDeltaFileClass; // 0xd0 (0x18)
};


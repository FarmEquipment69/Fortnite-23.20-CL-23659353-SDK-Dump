// Class /Script/Engine.BookMark
// Size: 0x68
class UBookMark : public UBookmarkBase
{
	struct FVector Location; // 0x28 (0x18)
	struct FRotator Rotation; // 0x40 (0x18)
	struct TArray<struct FString> HiddenLevels; // 0x58 (0x10)
};


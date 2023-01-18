// Class /Script/FortniteGame.FortCosmeticStatObject
// Size: 0x88
class UFortCosmeticStatObject : public UObject
{
	unsigned char unreflected_28[0x8]; // 0x28 (0x8) 
	struct TMap<struct TWeakObjectPtr<class AFortPlayerController>, int> CachedStatValues; // 0x30 (0x50)
	class UFortCosmeticStatSubsystem* OwningSubsystem; // 0x80 (0x8)
};


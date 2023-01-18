// Class /Script/FortniteGame.FortTandemCharacterData
// Size: 0x158
class UFortTandemCharacterData : public UPrimaryDataAsset
{
	struct FGameplayTag GameplayTag; // 0x30 (0x4)
	unsigned char unreflected_34[0x4]; // 0x34 (0x4) 
	struct FText DisplayName; // 0x38 (0x18)
	struct FText GeneralDescription; // 0x50 (0x18)
	struct FText AdditionalDescription; // 0x68 (0x18)
	struct FText BehaviorDescription; // 0x80 (0x18)
	struct TWeakObjectPtr<class UObject> ToastIcon; // 0x98 (0x28)
	struct TWeakObjectPtr<class UObject> EntryListIcon; // 0xc0 (0x28)
	struct TWeakObjectPtr<class UObject> SidePanelIcon; // 0xe8 (0x28)
	struct TWeakObjectPtr<class UObject> PunchCardIcon; // 0x110 (0x28)
	struct FLinearColor PrimaryColor; // 0x138 (0x10)
	struct FLinearColor SecondaryColor; // 0x148 (0x10)
};


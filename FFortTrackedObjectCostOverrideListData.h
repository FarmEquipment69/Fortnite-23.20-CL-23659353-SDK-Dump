// ScriptStruct /Script/FortniteGame.FortTrackedObjectCostOverrideListData
// Size: 0x68
struct FFortTrackedObjectCostOverrideListData : FTableRowBase
{
	struct TWeakObjectPtr<class UObject> ObjectPtr; // 0x8 (0x28)
	struct TWeakObjectPtr<class UClass> ClassPtr; // 0x30 (0x28)
	struct TArray<struct FVersionedCostOverride> Overrides; // 0x58 (0x10)
};


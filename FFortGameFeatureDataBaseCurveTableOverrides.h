// ScriptStruct /Script/FortniteGame.FortGameFeatureDataBaseCurveTableOverrides
// Size: 0x78
struct FFortGameFeatureDataBaseCurveTableOverrides
{
	struct TWeakObjectPtr<class UCurveTable> BaseTable; // 0x0 (0x28)
	struct TMap<struct FGameplayTag, struct TWeakObjectPtr<class UCurveTable>> PlaylistToOverrideTableMap; // 0x28 (0x50)
};


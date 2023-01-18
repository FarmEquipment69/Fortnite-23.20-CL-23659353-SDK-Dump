// ScriptStruct /Script/FortniteGame.IndicatedActorDataWithFilter
// Size: 0x210
struct FIndicatedActorDataWithFilter
{
	struct FGameplayTagContainer IndicatedActorTags; // 0x0 (0x20)
	struct FGameplayTagQuery IndicatedActorTagQuery; // 0x20 (0x48)
	struct TArray<struct TEnumAsByte<EObjectTypeQuery>> ObjectTypes; // 0x68 (0x10)
	struct TWeakObjectPtr<class UClass> ActorClassFilter; // 0x78 (0x28)
	struct TArray<struct TEnumAsByte<EFortTeamAffiliation>> WithAffiliation; // 0xa0 (0x10)
	struct FIndicatedActorData IndicatedData; // 0xb0 (0xd8)
	struct FStenciledActorData StenciledData; // 0x188 (0x80)
	float OverlapRadius; // 0x208 (0x4)
	float OverlapHalfHeight; // 0x20c (0x4)
};


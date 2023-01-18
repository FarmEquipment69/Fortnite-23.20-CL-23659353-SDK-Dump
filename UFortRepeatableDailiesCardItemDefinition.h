// Class /Script/FortniteGame.FortRepeatableDailiesCardItemDefinition
// Size: 0x4e0
class UFortRepeatableDailiesCardItemDefinition : public UFortAccountItemDefinition
{
	struct FScalableFloat ReplacedRestedXpValue; // 0x420 (0x28)
	struct FScalableFloat ReducedXPReward; // 0x448 (0x28)
	struct FScalableFloat ReplacedRestedXpValueScalarForMissedDays; // 0x470 (0x28)
	struct TWeakObjectPtr<class UFortAthenaRewardEventGraphPurchaseToken> RequiredItemDef; // 0x498 (0x28)
	struct TArray<struct FRepeatableDailiesCardDateOverride> DateOverrides; // 0x4c0 (0x10)
	struct TArray<struct FFortDailyQuestData> DailyQuestInfo; // 0x4d0 (0x10)
};


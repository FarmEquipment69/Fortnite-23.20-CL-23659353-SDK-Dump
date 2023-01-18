// Class /Script/FortniteGame.FortWorldMultiItemDefinition
// Size: 0x970
class UFortWorldMultiItemDefinition : public UFortWorldItemDefinition
{
	struct TArray<struct TWeakObjectPtr<class UFortItemDefinition>> ValidItemsToBecome; // 0x8e8 (0x10)
	struct TArray<struct FFortWorldMultiItemInfo> ItemInfos; // 0x8f8 (0x10)
	struct TArray<class UFortItemDefinition*> CachedItemDefinitionList; // 0x908 (0x10)
	unsigned char bDisplayCurrentItemRarity; // 0x918 (0x1)
	unsigned char bSwitchItemOnTimer; // 0x918 (0x1)
	unsigned char bSwitchItemAfterFiringEnds; // 0x918 (0x1)
	unsigned char bSwitchItemInSequenceByPoweringUp; // 0x918 (0x1)
	unsigned char bManuallyFlushPendingPowerUp; // 0x918 (0x1)
	unsigned char bPreventSwitchingWhileFiring; // 0x918 (0x1)
	unsigned char bPreventSwitchingWhileCharging; // 0x918 (0x1)
	unsigned char bPreventSwitchingWhileReloading; // 0x918 (0x1)
	unsigned char bPreventSwitchingWhileAiming; // 0x919 (0x1)
	unsigned char bPreventSwitchingWhileHidden; // 0x919 (0x1)
	unsigned char unreflected_91a[0x2]; // 0x91a (0x2) 
	float TimeBetweenSwitchingItems; // 0x91c (0x4)
	struct FGameplayTagContainer ItemActorSwitchingTellCues; // 0x920 (0x20)
	struct FGameplayTagContainer NewItemActorSwitchingCues; // 0x940 (0x20)
	float TellDuration; // 0x960 (0x4)
	struct FGameplayTag GameplayTagKeyForCurrentSelectedItemIndex; // 0x964 (0x4)
	struct FGameplayTag GameplayTagKeyForCurrentXP; // 0x968 (0x4)
	unsigned char padding_96c[0x4]; // 0x96c (0x4)
};


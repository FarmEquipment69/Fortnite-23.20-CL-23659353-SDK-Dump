// Class /Script/FortniteGame.FortGameplayTagData
// Size: 0x2f0
class UFortGameplayTagData : public UDataAsset
{
	struct FGameplayTag EnergyDamageTag; // 0x30 (0x4)
	struct FGameplayTag AllowHarvestingTools; // 0x34 (0x4)
	struct FGameplayTag EditingBuildingPermissionForcedTrue; // 0x38 (0x4)
	struct FGameplayTag DamageDoesNotInterruptInteractionTag; // 0x3c (0x4)
	struct FGameplayTagQuery PreventDamageFromInterruptingInteractionsTagQuery; // 0x40 (0x48)
	struct FGameplayTagQuery ShouldCopyHarvestToolSecondaryAbilityTagQuery; // 0x88 (0x48)
	struct FGameplayTag MainStWCampaignTheaterTag; // 0xd0 (0x4)
	struct FGameplayTag AIRangeToAutomaticallyAddEnemyPawnGoalsTag; // 0xd4 (0x4)
	struct FGameplayTagContainer QuickbarUnslottableItemTags; // 0xd8 (0x20)
	struct FGameplayTagContainer IgnoreMovementCancellableActionTags; // 0xf8 (0x20)
	struct FGameplayTag FakePawnTag; // 0x118 (0x4)
	struct FGameplayTag StarlightTheaterTag; // 0x11c (0x4)
	struct FGameplayTag NativeActionEmote; // 0x120 (0x4)
	struct FGameplayTag PawnHideTagCategory; // 0x124 (0x4)
	struct FGameplayTag ForceAutoRunOnTag; // 0x128 (0x4)
	struct FGameplayTag AbilityFailureNoMessageTag; // 0x12c (0x4)
	struct FGameplayTag DropHeldObjectOnPlacementInputTag; // 0x130 (0x4)
	struct FTierTags CosmeticUnlockRequirementTagsForRarityAndTier[0x6]; // 0x134 (0x18) (ARRAY) 
	unsigned char unreflected_1c4[0x4]; // 0x1c4 (0x4) 
	struct FGameplayTagQuery AllowShadowStanceMaterialsTagQuery; // 0x1c8 (0x48)
	struct FGameplayTag CosmeticSubGameExclusionTags[0x2]; // 0x210 (0x4) (ARRAY) 
	struct FGameplayTagQuery TransformationEmoteQuery; // 0x218 (0x48)
	struct FGameplayTagQuery CosmeticMetaTagFemaleCondition; // 0x260 (0x48)
	struct FGameplayTagQuery CosmeticMetaTagMaleCondition; // 0x2a8 (0x48)
};


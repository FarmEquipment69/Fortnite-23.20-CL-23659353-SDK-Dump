// Class /Script/FortniteGame.BuildingProp_QuestGlyph
// Size: 0xf28
class ABuildingProp_QuestGlyph : public ABuildingProp_Quest
{
	class UFortQuestItemDefinition* QuestDef; // 0xee8 (0x8)
	struct FLinearColor InteractSubTextColor; // 0xef0 (0x10)
	struct FLinearColor InteractSubTextColorUnlocked; // 0xf00 (0x10)
	bool bShowContextInfo; // 0xf10 (0x1)
	bool bContextInfoUnlocked; // 0xf11 (0x1)
	unsigned char unreflected_f12[0x2]; // 0xf12 (0x2) 
	float ActivationRange; // 0xf14 (0x4)
	struct TArray<class UFortMontageItemDefinitionBase*> GlyphActivationEmotes; // 0xf18 (0x10)

	/* Functions */

	// Function /Script/FortniteGame.BuildingProp_QuestGlyph.OnTriggeringEmote (Has no native function)
	void OnTriggeringEmote(class AFortPlayerController*& FortPC, class UFortMontageItemDefinitionBase*& EmoteAsset, struct FGameplayTagContainer& FilteredQuestMetaDataTags); // (Event | Public | HasOutParms | BlueprintEvent)
};


// Class /Script/FortniteUI.CreativePropertyEditWidgetMessageComponentBase
// Size: 0x550
class UCreativePropertyEditWidgetMessageComponentBase : public UCreativePropertyEditWidgetBase
{
	class UEditableText* EditableTextNumericEntry; // 0x540 (0x8)
	unsigned char padding_548[0x8]; // 0x548 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.CreativePropertyEditWidgetMessageComponentBase.HandleChannelNumericEntryCommitted (Underlying native function: HandleChannelNumericEntryCommitted 0xa6d90a0)
	void HandleChannelNumericEntryCommitted(struct FText& InText, struct TEnumAsByte<ETextCommit>& CommitInfo); // (Native | Event | Public | HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteUI.CreativePropertyEditWidgetMessageComponentBase.HandleChannelNumericEntryChanged (Underlying native function: HandleChannelNumericEntryChanged 0xa6d8fe0)
	void HandleChannelNumericEntryChanged(struct FText& Text); // (Native | Event | Public | HasOutParms | BlueprintCallable | BlueprintEvent)
};


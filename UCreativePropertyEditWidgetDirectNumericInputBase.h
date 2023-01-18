// Class /Script/FortniteUI.CreativePropertyEditWidgetDirectNumericInputBase
// Size: 0x558
class UCreativePropertyEditWidgetDirectNumericInputBase : public UCreativePropertyEditWidgetUserOptionBase
{
	unsigned char unreflected_548[0x8]; // 0x548 (0x8) 
	class UFortCreativePropertyNumericEntry* CreativePropertyNumericEntry; // 0x550 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.CreativePropertyEditWidgetDirectNumericInputBase.TryGetCurrentOptionValue (Underlying native function: TryGetCurrentOptionValue 0xa6dc408)
	void TryGetCurrentOptionValue(struct FString& Data); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteUI.CreativePropertyEditWidgetDirectNumericInputBase.SetNumericEntryEditable (Underlying native function: SetNumericEntryEditable 0xa6db744)
	void SetNumericEntryEditable(bool& bIsEditable); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.CreativePropertyEditWidgetDirectNumericInputBase.ParseTeamOrClassOptionsAsString (Underlying native function: ParseTeamOrClassOptionsAsString 0xa6da638)
	struct FString ParseTeamOrClassOptionsAsString(struct FString& OriginalString); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.CreativePropertyEditWidgetDirectNumericInputBase.OnRotated (Underlying native function: OnRotated 0xa6da1d4)
	void OnRotated(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.CreativePropertyEditWidgetDirectNumericInputBase.HandleNumericEntryCommited (Underlying native function: HandleNumericEntryCommited 0xa6d946c)
	void HandleNumericEntryCommited(float& InValue, struct TEnumAsByte<ETextCommit>& CommitInfo); // (Native | Event | Public | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteUI.CreativePropertyEditWidgetDirectNumericInputBase.HandleNumericEntryChanged (Underlying native function: HandleNumericEntryChanged 0x8d3c330)
	void HandleNumericEntryChanged(float& InValue); // (Native | Event | Public | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteUI.CreativePropertyEditWidgetDirectNumericInputBase.CheckIsNumeircValueModified (Underlying native function: CheckIsNumeircValueModified 0xa6d7490)
	void CheckIsNumeircValueModified(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.CreativePropertyEditWidgetDirectNumericInputBase.BP_PostNumericUpdateEditWidget (Has no native function)
	void BPPostNumericUpdateEditWidget(bool& IsCustomValue); // (Event | Public | BlueprintEvent)
};


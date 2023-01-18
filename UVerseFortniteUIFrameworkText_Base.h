// Class /Script/VerseFortniteUI.VerseFortniteUIFrameworkText_Base
// Size: 0xc8
class UVerseFortniteUIFrameworkText_Base : public UUIFrameworkWidget
{
	struct FText Text; // 0x90 (0x18)
	struct TEnumAsByte<ETextJustify> Justification; // 0xa8 (0x1)
	unsigned char padding_a9[0x1f]; // 0xa9 (0x1f)

	/* Functions */

	// Function /Script/VerseFortniteUI.VerseFortniteUIFrameworkText_Base.SetText (Underlying native function: SetText 0x70c5c64)
	void SetText(struct FText& Text); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/VerseFortniteUI.VerseFortniteUIFrameworkText_Base.SetJustification (Underlying native function: SetJustification 0x52efb80)
	void SetJustification(struct TEnumAsByte<ETextJustify>& Justification); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/VerseFortniteUI.VerseFortniteUIFrameworkText_Base.ServerTextCommitted (Underlying native function: ServerTextCommitted 0x7fc0ee0)
	void ServerTextCommitted(class APlayerController*& PlayerController, struct FText& NewText); // (Final | Net | NetReliable | Native | Event | Private | NetServer)

	// Function /Script/VerseFortniteUI.VerseFortniteUIFrameworkText_Base.OnRep_Text (Underlying native function: OnRep_Text 0x7fc0eb0)
	void OnRepText(); // (Final | Native | Private)

	// Function /Script/VerseFortniteUI.VerseFortniteUIFrameworkText_Base.OnRep_Justification (Underlying native function: OnRep_Justification 0x5be85c0)
	void OnRepJustification(); // (Final | Native | Private)

	// Function /Script/VerseFortniteUI.VerseFortniteUIFrameworkText_Base.GetText (Underlying native function: GetText 0x70c569c)
	struct FText GetText(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/VerseFortniteUI.VerseFortniteUIFrameworkText_Base.GetJustification (Underlying native function: GetJustification 0x52efa40)
	struct TEnumAsByte<ETextJustify> GetJustification(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/VerseFortniteUI.VerseFortniteUIFrameworkText_Base.ExecuteServerTextCommitted (Underlying native function: ExecuteServerTextCommitted 0x7fc0d78)
	void ExecuteServerTextCommitted(struct FText& Text, struct TEnumAsByte<ETextCommit>& CommitMethod); // (Final | Native | Protected | HasOutParms)
};


// Class /Script/VerseFortniteUI.VerseFortniteUIFrameworkButton_Base
// Size: 0xc0
class UVerseFortniteUIFrameworkButton_Base : public UUIFrameworkWidget
{
	struct FText Text; // 0x90 (0x18)
	unsigned char padding_a8[0x18]; // 0xa8 (0x18)

	/* Functions */

	// Function /Script/VerseFortniteUI.VerseFortniteUIFrameworkButton_Base.SetText (Underlying native function: SetText 0x70c5bc8)
	void SetText(struct FText& Text); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/VerseFortniteUI.VerseFortniteUIFrameworkButton_Base.ServerClick (Underlying native function: ServerClick 0x70c5a28)
	void ServerClick(class APlayerController*& PlayerController); // (Final | Net | NetReliable | Native | Event | Private | NetServer)

	// Function /Script/VerseFortniteUI.VerseFortniteUIFrameworkButton_Base.OnRep_Text (Underlying native function: OnRep_Text 0x7fc0e88)
	void OnRepText(); // (Final | Native | Private)

	// Function /Script/VerseFortniteUI.VerseFortniteUIFrameworkButton_Base.GetText (Underlying native function: GetText 0x70c569c)
	struct FText GetText(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};


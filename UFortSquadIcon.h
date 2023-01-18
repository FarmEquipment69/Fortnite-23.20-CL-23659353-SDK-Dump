// Class /Script/SaveTheWorldUI.FortSquadIcon
// Size: 0x2a0
class UFortSquadIcon : public UCommonUserWidget
{
	struct FName Name; // 0x290 (0x4)
	struct TEnumAsByte<EFortBrushSize> ImageSize; // 0x294 (0x1)
	unsigned char unreflected_295[0x3]; // 0x295 (0x3) 
	class UImage* Icon; // 0x298 (0x8)

	/* Functions */

	// Function /Script/SaveTheWorldUI.FortSquadIcon.SetSquad (Underlying native function: SetSquad 0x75c2b10)
	void SetSquad(struct FName& InName); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortSquadIcon.HandleDifferentSquadSetBP (Has no native function)
	void HandleDifferentSquadSetBP(); // (Event | Protected | BlueprintEvent)
};


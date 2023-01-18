// Class /Script/EntityActor.EntityActorTextDisplayComponent
// Size: 0xb8
class UEntityActorTextDisplayComponent : public UEntityActorComponent
{
	struct FText DisplayText; // 0x90 (0x18)
	float ShadowVarWorldSize; // 0xa8 (0x4)
	struct FColor ShadowVarTextRenderColor; // 0xac (0x4)
	bool bAddedTextRenderComponent; // 0xb0 (0x1)
	unsigned char padding_b1[0x7]; // 0xb1 (0x7)

	/* Functions */

	// Function /Script/EntityActor.EntityActorTextDisplayComponent.SetWorldSize (Underlying native function: SetWorldSize 0x6a5bc54)
	void SetWorldSize(float& Value); // (Final | Native | Public)

	// Function /Script/EntityActor.EntityActorTextDisplayComponent.SetVerticalAlignment (Underlying native function: SetVerticalAlignment 0x6a5bbac)
	void SetVerticalAlignment(struct TEnumAsByte<EVerticalTextAligment>& Value); // (Final | Native | Public)

	// Function /Script/EntityActor.EntityActorTextDisplayComponent.SetTextRenderColor (Underlying native function: SetTextRenderColor 0x6a5bb30)
	void SetTextRenderColor(struct FColor& Value); // (Final | Native | Public | HasDefaults)

	// Function /Script/EntityActor.EntityActorTextDisplayComponent.SetText (Underlying native function: SetText 0x6a5ba94)
	void SetText(struct FText& Text); // (Final | Native | Public)

	// Function /Script/EntityActor.EntityActorTextDisplayComponent.SetRelativeScale (Underlying native function: SetRelativeScale 0x6a5b9cc)
	void SetRelativeScale(struct FVector& RelativeScale); // (Final | Native | Public | HasDefaults)

	// Function /Script/EntityActor.EntityActorTextDisplayComponent.SetRelativeRotation (Underlying native function: SetRelativeRotation 0x6a5b8f0)
	void SetRelativeRotation(struct FRotator& RelativeRotation); // (Final | Native | Public | HasDefaults)

	// Function /Script/EntityActor.EntityActorTextDisplayComponent.SetRelativeLocation (Underlying native function: SetRelativeLocation 0x6a5b860)
	void SetRelativeLocation(struct FVector& RelativeLocation); // (Final | Native | Public | HasDefaults)

	// Function /Script/EntityActor.EntityActorTextDisplayComponent.SetHorizontalAlignment (Underlying native function: SetHorizontalAlignment 0x6a5b7b8)
	void SetHorizontalAlignment(struct TEnumAsByte<EHorizTextAligment>& Value); // (Final | Native | Public)

	// Function /Script/EntityActor.EntityActorTextDisplayComponent.OnRep_WorldSize (Underlying native function: OnRep_WorldSize 0x6a5b51c)
	void OnRepWorldSize(); // (Final | Native | Private)

	// Function /Script/EntityActor.EntityActorTextDisplayComponent.OnRep_TextRenderColor (Underlying native function: OnRep_TextRenderColor 0x6a5b4f0)
	void OnRepTextRenderColor(); // (Final | Native | Private)

	// Function /Script/EntityActor.EntityActorTextDisplayComponent.OnRep_DisplayText (Underlying native function: OnRep_DisplayText 0x6a5b490)
	void OnRepDisplayText(); // (Final | Native | Private)

	// Function /Script/EntityActor.EntityActorTextDisplayComponent.GetWorldSize (Underlying native function: GetWorldSize 0x6a5ae34)
	float GetWorldSize(); // (Final | Native | Public | Const)

	// Function /Script/EntityActor.EntityActorTextDisplayComponent.GetVerticalAlignment (Underlying native function: GetVerticalAlignment 0x6a5adcc)
	struct TEnumAsByte<EVerticalTextAligment> GetVerticalAlignment(); // (Final | Native | Public)

	// Function /Script/EntityActor.EntityActorTextDisplayComponent.GetTextRenderColor (Underlying native function: GetTextRenderColor 0x6a5ad68)
	struct FColor GetTextRenderColor(); // (Final | Native | Public | HasDefaults | Const)

	// Function /Script/EntityActor.EntityActorTextDisplayComponent.GetText (Underlying native function: GetText 0x6a5acec)
	struct FText GetText(); // (Final | Native | Public | Const)

	// Function /Script/EntityActor.EntityActorTextDisplayComponent.GetRelativeLocation (Underlying native function: GetRelativeLocation 0x6a5ac70)
	struct FVector GetRelativeLocation(); // (Final | Native | Public | HasDefaults)

	// Function /Script/EntityActor.EntityActorTextDisplayComponent.GetHorizontalAlignment (Underlying native function: GetHorizontalAlignment 0x6a5ac08)
	struct TEnumAsByte<EHorizTextAligment> GetHorizontalAlignment(); // (Final | Native | Public)
};


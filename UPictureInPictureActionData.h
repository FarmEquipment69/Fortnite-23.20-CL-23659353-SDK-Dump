// Class /Script/PictureInPictureDescriptors.PictureInPictureActionData
// Size: 0x170
class UPictureInPictureActionData : public UObject
{
	struct FString PartnerName; // 0x28 (0x10)
	unsigned char unreflected_38[0x8]; // 0x38 (0x8) 
	struct FSlateBrush ActionBrush; // 0x40 (0xc0)
	struct FText ActionText; // 0x100 (0x18)
	enum PictureInPictureAction ActionType; // 0x118 (0x1)
	unsigned char unreflected_119[0x7]; // 0x119 (0x7) 
	struct FMulticastInlineDelegate ActionEvent; // 0x120 (0x10)
	struct FMulticastInlineDelegate ActionFiredEvent; // 0x130 (0x10)
	unsigned char unreflected_140[0x18]; // 0x140 (0x18) 
	struct FMulticastInlineDelegate CallbackEvent; // 0x158 (0x10)
	unsigned char padding_168[0x8]; // 0x168 (0x8)

	/* Functions */

	// Function /Script/PictureInPictureDescriptors.PictureInPictureActionData.CallEvent (Underlying native function: CallEvent 0x145ca48)
	void CallEvent(); // (Native | Public | BlueprintCallable)
};


// Class /Script/LiveLinkComponents.LiveLinkComponentController
// Size: 0x148
class ULiveLinkComponentController : public UActorComponent
{
	struct FLiveLinkSubjectRepresentation SubjectRepresentation; // 0xa0 (0x10)
	struct TMap<class UClass*, class ULiveLinkControllerBase*> ControllerMap; // 0xb0 (0x50)
	bool bUpdateInEditor; // 0x100 (0x1)
	unsigned char unreflected_101[0x7]; // 0x101 (0x7) 
	struct FMulticastInlineDelegate OnLiveLinkUpdated; // 0x108 (0x10)
	struct FMulticastInlineDelegate OnControllerMapUpdatedDelegate; // 0x118 (0x10)
	bool bDisableEvaluateLiveLinkWhenSpawnable; // 0x128 (0x1)
	bool bEvaluateLiveLink; // 0x129 (0x1)
	bool bUpdateInPreviewEditor; // 0x12a (0x1)
	unsigned char padding_12b[0x1d]; // 0x12b (0x1d)

	/* Functions */

	// Function /Script/LiveLinkComponents.LiveLinkComponentController.SetSubjectRepresentation (Underlying native function: SetSubjectRepresentation 0x7cdc38c)
	void SetSubjectRepresentation(struct FLiveLinkSubjectRepresentation& InSubjectRepresentation); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/LiveLinkComponents.LiveLinkComponentController.GetSubjectRepresentation (Underlying native function: GetSubjectRepresentation 0x7cdc370)
	struct FLiveLinkSubjectRepresentation GetSubjectRepresentation(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};


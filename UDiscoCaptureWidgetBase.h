// Class /Script/FortniteUI.DiscoCaptureWidgetBase
// Size: 0x360
class UDiscoCaptureWidgetBase : public UFortHUDElementWidget
{
	struct FDiscoCaptureUIData CaptureUIData; // 0x2d0 (0x40)
	struct FDiscoCaptureUIData PrevCaptureUIData; // 0x310 (0x40)
	unsigned char unreflected_350[0x8]; // 0x350 (0x8) 
	unsigned char LastViewedTeam; // 0x358 (0x1)
	unsigned char padding_359[0x7]; // 0x359 (0x7)

	/* Functions */

	// Function /Script/FortniteUI.DiscoCaptureWidgetBase.UpdateDiscoCaptureUI (Underlying native function: UpdateDiscoCaptureUI 0xa5805dc)
	void UpdateDiscoCaptureUI(); // (Final | Native | Protected)

	// Function /Script/FortniteUI.DiscoCaptureWidgetBase.UpdateAllUI (Underlying native function: UpdateAllUI 0xa5805dc)
	void UpdateAllUI(); // (Final | Native | Protected)

	// Function /Script/FortniteUI.DiscoCaptureWidgetBase.OnUpdateCaptureUI (Has no native function)
	void OnUpdateCaptureUI(enum EDiscoCaptureUIState& CaptureState, struct FText& TextToDisplay, class UMaterialInstanceDynamic*& ImageMID, float& FillAmount); // (Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Script/FortniteUI.DiscoCaptureWidgetBase.OnHandleSpectatingChanged (Underlying native function: OnHandleSpectatingChanged 0xa57ee90)
	void OnHandleSpectatingChanged(class AFortPlayerStateZone*& SpectatingTarget); // (Final | Native | Protected)

	// Function /Script/FortniteUI.DiscoCaptureWidgetBase.GetClosestCapturePoint (Underlying native function: GetClosestCapturePoint 0xa57c808)
	class AAthenaCapturePoint* GetClosestCapturePoint(class AFortPlayerPawnAthena*& ViewPawn); // (Final | Native | Protected)
};


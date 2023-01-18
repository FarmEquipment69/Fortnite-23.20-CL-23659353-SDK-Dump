// Class /Script/FortniteGame.FortAthenaMutator_ShowPlacard
// Size: 0x378
class AFortAthenaMutator_ShowPlacard : public AFortAthenaMutator
{
	struct FMulticastInlineDelegate OnShowPlacardFinished; // 0x330 (0x10)
	struct FMulticastInlineDelegate OnShowPlacardSetWidgetVisibility; // 0x340 (0x10)
	enum EShowPlacardPhase ShowPlacardPhase; // 0x350 (0x1)
	unsigned char unreflected_351[0x3]; // 0x351 (0x3) 
	float WaitBeforeInitialFadeOutDuration; // 0x354 (0x4)
	float FadeDuration; // 0x358 (0x4)
	float ShowPlacardDuration; // 0x35c (0x4)
	float ServerWaitsOnBlackScreenDuration; // 0x360 (0x4)
	struct TWeakObjectPtr<class AActor> CameraActor; // 0x364 (0x8)
	unsigned char padding_36c[0xc]; // 0x36c (0xc)

	/* Functions */

	// Function /Script/FortniteGame.FortAthenaMutator_ShowPlacard.OnRep_ShowPlacardPhase (Underlying native function: OnRep_ShowPlacardPhase 0x8505eb0)
	void OnRepShowPlacardPhase(); // (Final | Native | Protected)
};


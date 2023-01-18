// Class /Script/FortniteGame.FortControllerComponent_Autofire
// Size: 0xc8
class UFortControllerComponent_Autofire : public UFortControllerComponent
{
	struct TWeakObjectPtr<class AActor> AutoFireReticleTarget; // 0xa0 (0x8)
	struct FTimerHandle* AutofireTimerHandle; // 0xa8 (0x8)
	struct FTimerHandle* DelayedStopAutofireTimerHandle; // 0xb0 (0x8)
	unsigned char padding_b8[0x10]; // 0xb8 (0x10)
};


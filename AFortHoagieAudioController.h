// Class /Script/HoagieRuntime.FortHoagieAudioController
// Size: 0x2f0
class AFortHoagieAudioController : public AActor
{
	bool bHighQualityOverride; // 0x288 (0x1)
	bool bLocalPlayerInHoagie; // 0x289 (0x1)
	bool bCriticalDamageNative; // 0x28a (0x1)
	bool bRotorHitNative; // 0x28b (0x1)
	bool bIsRotorWashActiveNative; // 0x28c (0x1)
	unsigned char unreflected_28d[0x3]; // 0x28d (0x3) 
	float RotorWashRelativeZOffset; // 0x290 (0x4)
	struct TWeakObjectPtr<class AFortHoagieVehicle> Vehicle; // 0x294 (0x8)
	unsigned char unreflected_29c[0x4]; // 0x29c (0x4) 
	class UFortLayeredAudioComponent* EngineAudio; // 0x2a0 (0x8)
	class UFortLayeredAudioComponent* RotorAudio; // 0x2a8 (0x8)
	unsigned char padding_2b0[0x40]; // 0x2b0 (0x40)

	/* Functions */

	// Function /Script/HoagieRuntime.FortHoagieAudioController.Update (Underlying native function: Update 0x70f5c98)
	void Update(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/HoagieRuntime.FortHoagieAudioController.CacheHoagieVehicle (Underlying native function: CacheHoagieVehicle 0x70f56c0)
	void CacheHoagieVehicle(class AFortHoagieVehicle*& InVehicle); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/HoagieRuntime.FortHoagieAudioController.CacheAudioComponents (Underlying native function: CacheAudioComponents 0x70f55f4)
	void CacheAudioComponents(class UFortLayeredAudioComponent*& InEngine, class UFortLayeredAudioComponent*& InRotor); // (Final | Native | Public | BlueprintCallable)
};


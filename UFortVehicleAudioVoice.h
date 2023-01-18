// Class /Script/FortniteGame.FortVehicleAudioVoice
// Size: 0xd10
class UFortVehicleAudioVoice : public UAudioComponent
{
	class USoundBase* LoopingSound; // 0xc58 (0x8)
	bool bFadeWhenOwnerDestroyed; // 0xc60 (0x1)
	unsigned char unreflected_c61[0x3]; // 0xc61 (0x3) 
	float FadeTimeWhenOwnerDestroyed; // 0xc64 (0x4)
	struct TArray<struct FFortVehicleAudioOneshotGate> OneshotGates; // 0xc68 (0x10)
	struct FMulticastInlineDelegate OnOneshotEvent; // 0xc78 (0x10)
	float OneShotGateInterpSpeed; // 0xc88 (0x4)
	unsigned char unreflected_c8c[0x14]; // 0xc8c (0x14) 
	struct FFortVehicleAudioParam VolumeParam; // 0xca0 (0x20)
	struct FFortVehicleAudioParam PitchParam; // 0xcc0 (0x20)
	struct TArray<struct FFortVehicleAudioFloatParam> FloatParams; // 0xce0 (0x10)
	struct TArray<struct FFortVehicleAudioFloatParam> ExplicitFloatParams; // 0xcf0 (0x10)
	struct FVector2D ParamRange; // 0xd00 (0x10)

	/* Functions */

	// Function /Script/FortniteGame.FortVehicleAudioVoice.StopAllAudio (Underlying native function: StopAllAudio 0x255b21c)
	void StopAllAudio(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortVehicleAudioVoice.SetParamRange (Underlying native function: SetParamRange 0x8e60cb8)
	void SetParamRange(float& min, float& max); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortVehicleAudioVoice.SetParamExplicit (Underlying native function: SetParamExplicit 0x8e60bf0)
	void SetParamExplicit(struct FName& Name, float& Param); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortVehicleAudioVoice.SetParam (Underlying native function: SetParam 0x23a1b04)
	void SetParam(float& Param); // (Final | Native | Public | BlueprintCallable)
};


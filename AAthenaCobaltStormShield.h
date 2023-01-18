// Class /Script/FortniteGame.AthenaCobaltStormShield
// Size: 0x610
class AAthenaCobaltStormShield : public AFortMissionStormShield
{
	unsigned char unreflected_560[0x8]; // 0x560 (0x8) 
	class USoundBase* ShieldBoundarySound; // 0x568 (0x8)
	float LowpassAudioListenerRange; // 0x570 (0x4)
	float LowpassAudioValueOutside; // 0x574 (0x4)
	float LowpassAudioValueInside; // 0x578 (0x4)
	float LowpassAudioInterpSpeed; // 0x57c (0x4)
	unsigned char unreflected_580[0x18]; // 0x580 (0x18) 
	class AFortAthenaMutator_Cobalt* CachedMutator; // 0x598 (0x8)
	unsigned char unreflected_5a0[0x18]; // 0x5a0 (0x18) 
	struct FTimerHandle* ShrinkTimerHandle; // 0x5b8 (0x8)
	struct FTimerHandle* ClientShrinkTimerHandle; // 0x5c0 (0x8)
	float ClientStormShieldShrinkTimerValue; // 0x5c8 (0x4)
	unsigned char unreflected_5cc[0x4]; // 0x5cc (0x4) 
	class UAudioComponent* ShieldBoundaryAudio; // 0x5d0 (0x8)
	unsigned char padding_5d8[0x38]; // 0x5d8 (0x38)

	/* Functions */

	// Function /Script/FortniteGame.AthenaCobaltStormShield.StormShieldShrinkTimerComplete (Underlying native function: StormShieldShrinkTimerComplete 0x8289d6c)
	void StormShieldShrinkTimerComplete(); // (Final | Native | Private)

	// Function /Script/FortniteGame.AthenaCobaltStormShield.OnRep_ClientStormShieldShrinkTimerValue (Underlying native function: OnRep_ClientStormShieldShrinkTimerValue 0x828940c)
	void OnRepClientStormShieldShrinkTimerValue(); // (Final | Native | Private)

	// Function /Script/FortniteGame.AthenaCobaltStormShield.ClientStormShieldShrinkTimerComplete (Underlying native function: ClientStormShieldShrinkTimerComplete 0x8287bfc)
	void ClientStormShieldShrinkTimerComplete(); // (Final | Native | Private)
};


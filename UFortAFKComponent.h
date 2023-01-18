// Class /Script/FortniteGame.FortAFKComponent
// Size: 0xf0
class UFortAFKComponent : public UPlayerStateComponent
{
	unsigned char unreflected_a0[0x20]; // 0xa0 (0x20) 
	bool bIsAFKWarningActive; // 0xc0 (0x1)
	bool bIsConfirmedAFK; // 0xc1 (0x1)
	unsigned char unreflected_c2[0x2]; // 0xc2 (0x2) 
	int NumTimesPlayerWentAFK; // 0xc4 (0x4)
	unsigned char padding_c8[0x28]; // 0xc8 (0x28)

	/* Functions */

	// Function /Script/FortniteGame.FortAFKComponent.OnRep_bIsConfirmedAFK (Underlying native function: OnRep_bIsConfirmedAFK 0x70dbbc0)
	void OnRepbIsConfirmedAFK(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortAFKComponent.OnRep_bIsAFKWarningActive (Underlying native function: OnRep_bIsAFKWarningActive 0x735d504)
	void OnRepbIsAFKWarningActive(); // (Final | Native | Protected)
};


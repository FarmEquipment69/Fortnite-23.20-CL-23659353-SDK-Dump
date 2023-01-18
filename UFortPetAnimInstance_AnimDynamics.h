// Class /Script/FortniteGame.FortPetAnimInstance_AnimDynamics
// Size: 0x5b0
class UFortPetAnimInstance_AnimDynamics : public UFortPetAnimInstanceShared
{
	float PawnSpeedForAnimDynamics; // 0x598 (0x4)
	float PawnSpeedForPlayingEmote; // 0x59c (0x4)
	float PawnSpeedForDBNO; // 0x5a0 (0x4)
	unsigned char bIsJoggingOrSprinting; // 0x5a4 (0x1)
	unsigned char bPetWantsAnimDynamics; // 0x5a4 (0x1)
	unsigned char bIsPlayingEmote; // 0x5a4 (0x1)
	unsigned char bIsDBNO; // 0x5a4 (0x1)
	unsigned char bIsPlayingEmoteOrDBNO; // 0x5a4 (0x1)
	unsigned char bIsSkydiving; // 0x5a4 (0x1)
	unsigned char bIsParachuteOpened; // 0x5a4 (0x1)
	unsigned char unreflected_5a5[0x3]; // 0x5a5 (0x3) 
	unsigned char bIsSkydiveDiveMode; // 0x5a8 (0x1)
	unsigned char bIsSkydiveFloating; // 0x5a8 (0x1)
	unsigned char unreflected_5a9[0x3]; // 0x5a9 (0x3) 
	unsigned char bIsCrouching; // 0x5ac (0x1)
	unsigned char bIsTargeting; // 0x5ac (0x1)
	unsigned char padding_5ad[0x3]; // 0x5ad (0x3)

	/* Functions */

	// Function /Script/FortniteGame.FortPetAnimInstance_AnimDynamics.OnParachuteOpened (Has no native function)
	void OnParachuteOpened(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortPetAnimInstance_AnimDynamics.OnParachuteClosed (Has no native function)
	void OnParachuteClosed(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortPetAnimInstance_AnimDynamics.OnEndTargeting (Has no native function)
	void OnEndTargeting(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortPetAnimInstance_AnimDynamics.OnEndSkydiving (Has no native function)
	void OnEndSkydiving(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortPetAnimInstance_AnimDynamics.OnEndFloating (Has no native function)
	void OnEndFloating(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortPetAnimInstance_AnimDynamics.OnEndDiveMode (Has no native function)
	void OnEndDiveMode(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortPetAnimInstance_AnimDynamics.OnEndCrouching (Has no native function)
	void OnEndCrouching(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortPetAnimInstance_AnimDynamics.OnBeginTargeting (Has no native function)
	void OnBeginTargeting(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortPetAnimInstance_AnimDynamics.OnBeginSkydiving (Has no native function)
	void OnBeginSkydiving(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortPetAnimInstance_AnimDynamics.OnBeginFloating (Has no native function)
	void OnBeginFloating(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortPetAnimInstance_AnimDynamics.OnBeginDiveMode (Has no native function)
	void OnBeginDiveMode(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortPetAnimInstance_AnimDynamics.OnBeginCrouching (Has no native function)
	void OnBeginCrouching(); // (Event | Public | BlueprintEvent)
};


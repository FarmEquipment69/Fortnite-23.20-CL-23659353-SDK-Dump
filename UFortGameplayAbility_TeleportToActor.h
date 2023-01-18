// Class /Script/FortniteAI.FortGameplayAbility_TeleportToActor
// Size: 0xb58
class UFortGameplayAbility_TeleportToActor : public UFortGameplayAbility
{
	unsigned char unreflected_b20[0x4]; // 0xb20 (0x4) 
	bool bCheckPlayerLOSWhenTeleporting; // 0xb24 (0x1)
	unsigned char unreflected_b25[0x3]; // 0xb25 (0x3) 
	float MaxDistanceToConsiderLOS; // 0xb28 (0x4)
	float PlayerFOV; // 0xb2c (0x4)
	float TeleportDelay; // 0xb30 (0x4)
	int TeleportRetries; // 0xb34 (0x4)
	float RetryDelay; // 0xb38 (0x4)
	unsigned char unreflected_b3c[0xc]; // 0xb3c (0xc) 
	class UEnvQuery* FindTeleportSpotEQSQuery; // 0xb48 (0x8)
	unsigned char padding_b50[0x8]; // 0xb50 (0x8)

	/* Functions */

	// Function /Script/FortniteAI.FortGameplayAbility_TeleportToActor.PreTeleportPawn (Has no native function)
	void PreTeleportPawn(class AFortPawn*& TeleportedPawn); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteAI.FortGameplayAbility_TeleportToActor.PostTeleportedPawn (Has no native function)
	void PostTeleportedPawn(class AFortPawn*& TeleportedPawn); // (Event | Public | BlueprintEvent)
};


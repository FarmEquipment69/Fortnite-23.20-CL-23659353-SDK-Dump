// Class /Script/FortniteUI.OstrichReticleDecorator
// Size: 0x2f8
class UOstrichReticleDecorator : public UFortHUDElementWidget
{
	unsigned char unreflected_2d0[0x8]; // 0x2d0 (0x8) 
	float RocketCooldownUpdateFrequency; // 0x2d8 (0x4)
	unsigned char unreflected_2dc[0x4]; // 0x2dc (0x4) 
	class AFortCharacterVehicle_Ostrich* OwningOstrichVehicle; // 0x2e0 (0x8)
	unsigned char padding_2e8[0x10]; // 0x2e8 (0x10)

	/* Functions */

	// Function /Script/FortniteUI.OstrichReticleDecorator.ShotgunReload (Has no native function)
	void ShotgunReload(float& Duration); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.OstrichReticleDecorator.RocketsFired (Has no native function)
	void RocketsFired(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.OstrichReticleDecorator.RocketLoaded (Has no native function)
	void RocketLoaded(float& Percent, int& Total); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.OstrichReticleDecorator.RocketCooldown (Has no native function)
	void RocketCooldown(float& Percent); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.OstrichReticleDecorator.OnSetupComplete (Has no native function)
	void OnSetupComplete(); // (Event | Protected | BlueprintEvent)
};


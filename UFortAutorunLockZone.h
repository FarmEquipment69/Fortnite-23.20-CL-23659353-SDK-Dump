// Class /Script/FortniteUI.FortAutorunLockZone
// Size: 0x320
class UFortAutorunLockZone : public UBacchusHUDElement
{
	unsigned char unreflected_318[0x1]; // 0x318 (0x1) 
	bool bIsInZone; // 0x319 (0x1)
	bool bIsAutorunLockEnabled; // 0x31a (0x1)
	unsigned char padding_31b[0x5]; // 0x31b (0x5)

	/* Functions */

	// Function /Script/FortniteUI.FortAutorunLockZone.OnInZoneChanged (Has no native function)
	void OnInZoneChanged(bool& bNewIsInZone); // (Event | Public | BlueprintEvent)
};


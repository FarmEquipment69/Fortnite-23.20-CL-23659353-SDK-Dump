// Class /Script/OnlineSubsystemUtils.SpectatorBeaconState
// Size: 0x58
class USpectatorBeaconState : public UObject
{
	struct FName SessionName; // 0x28 (0x4)
	int NumConsumedReservations; // 0x2c (0x4)
	int MaxReservations; // 0x30 (0x4)
	bool bRestrictCrossConsole; // 0x34 (0x1)
	unsigned char unreflected_35[0x3]; // 0x35 (0x3) 
	struct TArray<struct FSpectatorReservation> Reservations; // 0x38 (0x10)
	unsigned char padding_48[0x10]; // 0x48 (0x10)
};


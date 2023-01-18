// Class /Script/FortniteGame.PapayaServerMigrationComponent
// Size: 0x150
class UPapayaServerMigrationComponent : public UFortPlayspaceComponent
{
	unsigned char unreflected_f8[0x30]; // 0xf8 (0x30) 
	struct TArray<struct FServerMigrationAlertData> AlertDataList; // 0x128 (0x10)
	unsigned char unreflected_138[0x10]; // 0x138 (0x10) 
	float LastRequestedTimeForMigrationTimerPushback; // 0x148 (0x4)
	unsigned char padding_14c[0x4]; // 0x14c (0x4)

	/* Functions */

	// Function /Script/FortniteGame.PapayaServerMigrationComponent.OnRep_LastRequestedTimeForMigrationTimerPushback (Underlying native function: OnRep_LastRequestedTimeForMigrationTimerPushback 0x8dff520)
	void OnRepLastRequestedTimeForMigrationTimerPushback(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.PapayaServerMigrationComponent.OnGameStateReady (Underlying native function: OnGameStateReady 0x8dfe978)
	void OnGameStateReady(class AGameStateBase*& GameState); // (Final | 0x00000002 | Native | Protected)
};


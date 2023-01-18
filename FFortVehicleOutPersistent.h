// ScriptStruct /Script/FortniteGame.FortVehicleOutPersistent
// Size: 0x30
struct FFortVehicleOutPersistent
{
	unsigned char bCanDriveOnIncline; // 0x8 (0x1)
	unsigned char bWheelsOnGround; // 0x8 (0x1)
	unsigned char bAnyWheelsOnGround; // 0x8 (0x1)
	unsigned char bIsTouchingDrivableGround; // 0x8 (0x1)
	unsigned char bIsAsyncCorrectingOrientation; // 0x8 (0x1)
	unsigned char bIsTouchingGroundWithoutWheels; // 0x8 (0x1)
	unsigned char bPossiblyTouchingTop; // 0x8 (0x1)
	bool bOnRoad; // 0x9 (0x1)
	bool bOnLandscape; // 0xa (0x1)
	bool bOnDirt; // 0xb (0x1)
	bool bOnVehicle; // 0xc (0x1)
	bool bBoosting; // 0xd (0x1)
	bool bOnGrass; // 0xe (0x1)
	bool bOnSnow; // 0xf (0x1)
	bool bOnIce; // 0x10 (0x1)
	unsigned char unreflected_11[0x7]; // 0x11 (0x7) 
	struct TArray<enum ETireSurfaces> TireSurfaces; // 0x18 (0x10)
	float TotalBrakingDelta; // 0x28 (0x4)
	unsigned char padding_2c[0x4]; // 0x2c (0x4)
};


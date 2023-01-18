// Class /Script/FortniteGame.FortAthenaSKVehicle
// Size: 0x19d0
class AFortAthenaSKVehicle : public AFortAthenaVehicle
{
	float WheelOffsetFR; // 0x1948 (0x4)
	float WheelOffsetFL; // 0x194c (0x4)
	float WheelOffsetLimitF; // 0x1950 (0x4)
	float WheelOffsetBR; // 0x1954 (0x4)
	float WheelOffsetBL; // 0x1958 (0x4)
	float WheelOffsetLimitB; // 0x195c (0x4)
	float WheelOffsetLerpPerSecondUp; // 0x1960 (0x4)
	float WheelOffsetLerpPerSecondDown; // 0x1964 (0x4)
	float AxleOffsetZ; // 0x1968 (0x4)
	float AxleOffsetZB; // 0x196c (0x4)
	float AxleCenterF; // 0x1970 (0x4)
	float AxleCenterB; // 0x1974 (0x4)
	float AxleRollF; // 0x1978 (0x4)
	float AxleRollB; // 0x197c (0x4)
	float WheelRotationFR; // 0x1980 (0x4)
	float WheelRotationFL; // 0x1984 (0x4)
	float WheelRotationBR; // 0x1988 (0x4)
	float WheelRotationBL; // 0x198c (0x4)
	float WheelRotationVelocityFR; // 0x1990 (0x4)
	float WheelRotationVelocityFL; // 0x1994 (0x4)
	float WheelRotationVelocityBR; // 0x1998 (0x4)
	float WheelRotationVelocityBL; // 0x199c (0x4)
	float WheelSpinFR; // 0x19a0 (0x4)
	float WheelSpinFL; // 0x19a4 (0x4)
	float WheelSpinBR; // 0x19a8 (0x4)
	float WheelSpinBL; // 0x19ac (0x4)
	float WheelSpinVelocityFR; // 0x19b0 (0x4)
	float WheelSpinVelocityFL; // 0x19b4 (0x4)
	float WheelSpinVelocityBR; // 0x19b8 (0x4)
	float WheelSpinVelocityBL; // 0x19bc (0x4)
	float WheelSpinDampingPerSecond; // 0x19c0 (0x4)
	unsigned char padding_19c4[0xc]; // 0x19c4 (0xc)

	/* Functions */

	// Function /Script/FortniteGame.FortAthenaSKVehicle.GetModifiedDamageForActor (Underlying native function: GetModifiedDamageForActor 0x83079e4)
	float GetModifiedDamageForActor(float& Damage, class ABuildingActor*& BuildingActor); // (0x00000002 | Native | Protected | BlueprintCallable | BlueprintPure | Const)
};


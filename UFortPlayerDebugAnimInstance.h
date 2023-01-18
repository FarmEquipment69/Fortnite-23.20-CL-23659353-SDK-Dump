// Class /Script/FortniteGame.FortPlayerDebugAnimInstance
// Size: 0x490
class UFortPlayerDebugAnimInstance : public UFortBaseLayerAnimInstance
{
	enum EFortSynchedActionEndMovementMode SynchedActionEndMovementModeDebug; // 0x440 (0x1)
	struct TEnumAsByte<EFortCustomMovement> CustomMovementModeDebug; // 0x441 (0x1)
	struct TEnumAsByte<EMovementMode> MovementModeDebug; // 0x442 (0x1)
	unsigned char bIsSynchedActionCompletedDebug; // 0x443 (0x1)
	unsigned char bIsOnGroundDebug; // 0x443 (0x1)
	unsigned char bIsFallingDebug; // 0x443 (0x1)
	unsigned char unreflected_444[0x4]; // 0x444 (0x4) 
	struct FVector PawnPositionDebug; // 0x448 (0x18)
	struct FRotator PawnRotationDebug; // 0x460 (0x18)
	float YawRotationDeltaDebug; // 0x478 (0x4)
	unsigned char bRotationChangedSideDebug; // 0x47c (0x1)
	unsigned char unreflected_47d[0x3]; // 0x47d (0x3) 
	struct TArray<struct FString> LinkedGraphComponentDebug; // 0x480 (0x10)
};


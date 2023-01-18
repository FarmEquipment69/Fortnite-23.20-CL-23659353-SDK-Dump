// ScriptStruct /Script/AIPatrolPath.PatrolPathSegmentDetails
// Size: 0x108
struct FPatrolPathSegmentDetails
{
	class UNavigationPath* Path; // 0xa8 (0x8)
	class UAIPatrolPathComponent* Start; // 0xb0 (0x8)
	class UAIPatrolPathComponent* End; // 0xb8 (0x8)
	unsigned char padding_c0[0x48]; // 0xc0 (0x48)
};


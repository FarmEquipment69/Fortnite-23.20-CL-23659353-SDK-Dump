// Class /Script/Engine.AnimCompress_RemoveLinearKeys
// Size: 0x60
class UAnimCompress_RemoveLinearKeys : public UAnimCompress
{
	float MaxPosDiff; // 0x40 (0x4)
	float MaxAngleDiff; // 0x44 (0x4)
	float MaxScaleDiff; // 0x48 (0x4)
	float MaxEffectorDiff; // 0x4c (0x4)
	float MinEffectorDiff; // 0x50 (0x4)
	float EffectorDiffSocket; // 0x54 (0x4)
	float ParentKeyScale; // 0x58 (0x4)
	unsigned char bRetarget; // 0x5c (0x1)
	unsigned char bActuallyFilterLinearKeys; // 0x5c (0x1)
	unsigned char padding_5d[0x3]; // 0x5d (0x3)
};


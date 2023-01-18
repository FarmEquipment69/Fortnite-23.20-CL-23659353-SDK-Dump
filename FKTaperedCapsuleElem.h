// ScriptStruct /Script/Engine.KTaperedCapsuleElem
// Size: 0x68
struct FKTaperedCapsuleElem : FKShapeElem
{
	struct FVector Center; // 0x28 (0x18)
	struct FRotator Rotation; // 0x40 (0x18)
	float Radius0; // 0x58 (0x4)
	float Radius1; // 0x5c (0x4)
	float Length; // 0x60 (0x4)
	unsigned char padding_64[0x4]; // 0x64 (0x4)
};


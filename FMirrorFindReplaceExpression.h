// ScriptStruct /Script/Engine.MirrorFindReplaceExpression
// Size: 0xc
struct FMirrorFindReplaceExpression
{
	struct FName FindExpression; // 0x0 (0x4)
	struct FName ReplaceExpression; // 0x4 (0x4)
	struct TEnumAsByte<EMirrorFindReplaceMethod> FindReplaceMethod; // 0x8 (0x1)
	unsigned char padding_9[0x3]; // 0x9 (0x3)
};


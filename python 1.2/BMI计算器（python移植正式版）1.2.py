import sys

# 全局变量定义区域↓↓↓
# TODO 请注意变量冲突问题

shili1145140 = 0  # 我是示例，不要调用

aplas = [0] * 1000
bplas = [0] * 1000
cplas = [0] * 1000  # 啊！！！！高精度要用的！不要动！！！不要动！！！不要动！！！

lenMax = 0

# 全局变量定义区域↑↑↑


# 函数预定区域↓↓↓
# TODO 不要堆屎山！！！

def shili1919810():
    print("我是示例，不要调用")


def BMIans():  # BMI计算模块化
    w = float(input("请输入您的身高:"))
    g = float(input("请输入您的体重:"))
    print("您的BMI为: {:.2f}".format(g / (w * w)))


def ansfore(l, o, r):  # 四则运算模块化
    o += 0.0
    r += 0.0
    if l == 1:
        return o + r
    elif l == 2:
        return o - r
    elif l == 3:
        return o * r
    elif l == 4:
        if r != 0:
            return o / r
        else:
            return 0


def gaoplas(d, e):  # 高精度加法模块化
    len1 = len(d)
    len2 = len(e)
    for i in range(len1):
        aplas[len1 - i - 1] = int(d[i])
    for i in range(len2):
        bplas[len2 - i - 1] = int(e[i])

    if len1 > len2:
        lenMax = len1
    else:
        lenMax = len2

    for j in range(lenMax):
        cplas[j] = aplas[j] + bplas[j] + cplas[j]
        if cplas[j] >= 10:
            cplas[j + 1] = 1
            cplas[j] = cplas[j] - 10

    if cplas[lenMax] > 0:
        lenMax += 1


# 函数预定区域↑↑↑


def main():
    flag0 = False  # 重要名，勿重复定义
    flag1 = False
    while True:
        if flag0:
            print("欢迎来到BMI计算机")
            flag0 = True

        if flag1:
            break

        print("计算BMI请按1")
        print("计算四则运算低精度请按2")
        print("计算四则运算高精度请按3")
        print("退出请按0")
        k700 = int(input("输入："))

        if k700 == 1:
            BMIans()
        elif k700 == 2:
            f = int(input("请输入四则运算模式（加法为1；减法为2；乘法为3；除法为4）："))
            one = float(input("请输入第一个数："))
            two = float(input("请输入第二个数："))
            print("您的结果为：", ansfore(f, one, two))
        elif k700 == 3:
            print("1.2版本只有高精度加法，下面全是高精度加法")
            x114 = input("请输入第一个数：")
            y114 = input("请输入第二个数：")
            gaoplas(x114, y114)
            print("结果为：", end="")
            for i in range(lenMax - 1, -1, -1):
                print(cplas[i], end="")
            print()
        elif k700 == 0:
            p10203 = input("您确定要退出么?(y/n)")
            if p10203 == 'y':
                flag1 = True
            else:
                continue


if __name__ == "__main__":
    main()

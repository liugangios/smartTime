### 简介
smartTime是一个方便的`NSString`的分类，功能是把时间戳转换成类似微博发布时间、微信发布时间的刚刚、X分钟前、X小时前等等。
### 使用
1、手动添加`NSString+Time`分类
2、在控制器中导入分类
`#import "NSString+Time.h"`
3、调用`NSString`的`smartTime`对象方法，会返回一个处理好的时间
```objectivec
NSString *time = @"1467965120";//时间戳
NSString *smartTime = [time smartTime];//处理好的时间
NSLog(@"%@",smartTime);
```

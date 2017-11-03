# XML数据解析工具
	**工具提供两种API方法解析XML数据**

	/*
	 **  XML数据解析, xmlString: XML数据
	 */
	+(NSDictionary *)dicWithXMLString:(NSString *)xmlString;
	/*
	 **  XML数据解析, xmlUrl: XML数据URL链接
	 */
	+(NSDictionary *)dicWithXMLUrl:(NSURL *)xmlUrl;

	注意问题: 
	1. supported deployment target - iOS 8.0 以上
	2. 下载demo后, 直接接入项目, 可用
	
title
-------
###### 1.small title
```c
required init?(coder aDecoder: NSCoder) {
        fatalError("init(coder:) has not been implemented")
}
```
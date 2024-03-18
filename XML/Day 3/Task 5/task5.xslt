<?xml version="1.0" encoding="UTF-8"?>
<xsl:stylesheet version="2.0" xmlns:xsl="http://www.w3.org/1999/XSL/Transform" xmlns:xs="http://www.w3.org/2001/XMLSchema" xmlns:fn="http://www.w3.org/2005/xpath-functions" xmlns:xdt="http://www.w3.org/2005/xpath-datatypes">
	<xsl:output method="html" version="1.0" encoding="UTF-8" indent="yes"/>
	<xsl:template match="/">
		<html>
			<head>
				<title/>
			</head>
			<body>
				<h1>Sum of All Numbers</h1>
				<xsl:for-each select="//number">
					<span>
						<xsl:if test=" position() != last()">
							<xsl:value-of select="."/> +
						</xsl:if>
						<xsl:if test=" position() = last()">
							<xsl:value-of select="."/> = <xsl:value-of select="sum(//number)"/>
						</xsl:if>
					</span>
				</xsl:for-each>
			</body>
		</html>
	</xsl:template>
	<xsl:template match="/">
		<html>
			<head>
				<title/>
			</head>
			<body>
				<h1>Sum of Even Numbers</h1>
				<xsl:for-each select="//number[. mod 2 = 0]">
					<span>
						<xsl:if test=" position() != last()">
							<xsl:value-of select="."/> +
						</xsl:if>
						<xsl:if test=" position() = last()">
							<xsl:value-of select="."/> = <xsl:value-of select="sum(//number[. mod 2 = 0])"/>
						</xsl:if>
					</span>
				</xsl:for-each>
			</body>
		</html>
	</xsl:template>
	<xsl:template match="/">
		<html>
			<head>
				<title/>
			</head>
			<body>
				<h1>Sum of Odd Numbers</h1>
				<xsl:for-each select="//number[. mod 2 != 0]">
					<span>
						<xsl:if test=" position() != last()">
							<xsl:value-of select="."/> +
						</xsl:if>
						<xsl:if test=" position() = last()">
							<xsl:value-of select="."/> = <xsl:value-of select="sum(//number[. mod 2 != 0])"/>
						</xsl:if>
					</span>
				</xsl:for-each>
			</body>
		</html>
	</xsl:template>
</xsl:stylesheet>

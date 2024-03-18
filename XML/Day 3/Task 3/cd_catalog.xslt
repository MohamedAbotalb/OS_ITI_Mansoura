<?xml version="1.0" encoding="UTF-8"?>
<xsl:stylesheet version="2.0" xmlns:xsl="http://www.w3.org/1999/XSL/Transform" xmlns:xs="http://www.w3.org/2001/XMLSchema" xmlns:fn="http://www.w3.org/2005/xpath-functions" xmlns:xdt="http://www.w3.org/2005/xpath-datatypes">
	<xsl:output method="html" version="1.0" encoding="UTF-8" indent="yes"/>
	<xsl:template match="/">
		<html>
			<head>
				<title/>
			</head>
			<body>
				<table border="2" cellpadding="8">
					<thead align="center">
						<tr>
							<th>TITLE</th>
						</tr>
					</thead>
					<tbody align="center">
						<xsl:for-each select="//CD">
							<xsl:choose>
								<xsl:when test="PRICE &gt; 10">
									<tr style="background-color: red;">
										<td>
											<xsl:value-of select="TITLE"/>
										</td>
									</tr>
								</xsl:when>
								<xsl:when test="PRICE &lt; 10">
									<tr style="background-color: green;">
										<td>
											<xsl:value-of select="TITLE"/>
										</td>
									</tr>
								</xsl:when>
							</xsl:choose>
						</xsl:for-each>
					</tbody>
				</table>
			</body>
		</html>
	</xsl:template>
</xsl:stylesheet>

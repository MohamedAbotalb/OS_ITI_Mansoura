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
							<th>word</th>
						</tr>
					</thead>
					<tbody align="center">
						<xsl:for-each select="//word">
							<xsl:sort select="@id" data-type="text" case-order="lower-first" order="ascending" />
							<tr>
								<td><xsl:value-of select="@id"/></td>
							</tr>
						</xsl:for-each>
					</tbody>
				</table>
			</body>
		</html>
	</xsl:template>
</xsl:stylesheet>

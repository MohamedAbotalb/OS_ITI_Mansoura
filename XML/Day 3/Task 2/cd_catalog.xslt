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
							<th>ARTIST</th>
							<th>COUNTRY</th>
							<th>COMPANY</th>
							<th>PRICE</th>
							<th>YEAR</th>
						</tr>
					</thead>
					<tbody align="center">
						<xsl:for-each select="//CD">
							<xsl:sort select="PRICE" data-type="number" order="descending"/>
							<tr>
								<td>
									<xsl:value-of select="TITLE"/>
								</td>
								<td>
									<xsl:value-of select="ARTIST"/>
								</td>
								<td>
									<xsl:value-of select="COUNTRY"/>
								</td>
								<td>
									<xsl:value-of select="COMPANY"/>
								</td>
								<td>
									<xsl:value-of select="PRICE"/>
								</td>
								<td>
									<xsl:value-of select="YEAR"/>
								</td>
							</tr>
						</xsl:for-each>
					</tbody>
				</table>
			</body>
		</html>
	</xsl:template>
</xsl:stylesheet>
